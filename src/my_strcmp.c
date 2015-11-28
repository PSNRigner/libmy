#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1 && s2 && s1[i] && s2[i] && s1[i] == s2[i])
    i++;
  if (s1 && !s2)
    return (1);
  if (!s1 && s2)
    return (-1);
  if (!s1 && !s2)
    return (0);
  return (s1[i] - s2[i]);
}
