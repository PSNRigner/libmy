#include "my.h"

int	my_atoi(char *str)
{
  int	nbr;
  int	i;
  int	sign;

  i = 0;
  nbr = 0;
  sign = (str && str[0] == '-' ? -1 : 1);
  while (str && str[i])
    {
      if (!is_char_nbr(str[i]))
	return (nbr * sign);
      nbr += str[i] - '0';
    }
  return (nbr * sign);
}
