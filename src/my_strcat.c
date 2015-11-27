#include "my.h"

char	*my_strcat(char *str1, char *str2)
{
  char	*new;
  int	i[2];

  if (!str1)
    return (str2);
  if (!str2)
    return (str1);
  i[1] = my_strlen(str1);
  if (!(new = malloc((my_strlen(str2) + i[1] + 1) * sizeof(char))))
    return (str1);
  i[0] = 0;
  while (i[0] < i[1])
    {
      new[i[0]] = str1[i[0]];
      i[0]++;
    }
  while (str2[i[0] - i[1]])
    {
      new[i[0]] = str2[i[0] - i[1]];
      i[0]++;
    }
  return (new);
}
