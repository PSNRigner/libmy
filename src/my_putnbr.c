#include "my.h"

void	my_putnbr(int n)
{
  if (n / 10)
    my_putnbr(n > 0 ? n / 10 : -1 * (n / 10));
  my_putchar('0' + (n > 0 ? n % 10 : -1 * (n % 10)));
}
