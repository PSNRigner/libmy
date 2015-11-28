#include "my.h"

void	my_putnbr_fd(int n, int fd)
{
  if (n / 10)
    my_putnbr_fd(n > 0 ? n / 10 : -1 * (n / 10), fd);
  my_putchar_fd('0' + (n > 0 ? n % 10 : -1 * (n % 10)), fd);
}
