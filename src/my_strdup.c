#include "my.h"

char	*my_strdup(char *str)
{
  char	*new;
  int	i;

  if (!str)
    return (NULL);
  i = 0;
  new = my_malloc((my_strlen(str) + 1) * sizeof(char));
  while (str[i])
    {
      new[i] = str[i];
      i++;
    }
  new[i] = 0;
  return (new);
}
