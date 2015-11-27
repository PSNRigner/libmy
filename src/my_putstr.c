#include "my.h"

void	my_putstr(char *str)
{
  int	n;

  n = 0;
  while (str && str[n])
    {
      my_putchar(str[n]);
      n++;
    }
}
