#include "my.h"

t_bool	my_strstart(char *s1, char *s2)
{
  int	i;

  if (!s1 || !s2)
    return (FALSE);
  i = 0;
  while (s1[i] && s2[i] && s1[i] == s2[i])
    i++;
  return (s2[i] == 0);
}
