#include "my.h"

void	my_putstr_fd(char *str, int fd)
{
  int	n;

  n = 0;
  while (str && str[n])
    {
      my_putchar_fd(str[n], fd);
      n++;
    }
}
