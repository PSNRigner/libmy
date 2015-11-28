#include "my.h"

char	*my_strlower(char *str)
{
  char	*new;
  int	i;

  if (!str || !(new = my_strdup(str)))
    return (str);
  i = 0;
  while (new[i])
    {
      if (new[i] >= 'A' && new[i] <= 'Z')
	new[i] += 32;
      i++;
    }
  return (new);
}
