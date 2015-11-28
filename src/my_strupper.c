#include "my.h"

char	*my_strupper(char *str)
{
  char	*new;
  int	i;

  if (!str || !(new = my_strdup(str)))
    return (str);
  i = 0;
  while (new[i])
    {
      if (new[i] >= 'a' && new[i] <= 'z')
	new[i] -= 32;
      i++;
    }
  return (new);
}
