#include "my.h"

void	my_putchar(char c)
{
  if (write(1, &c, 1) != 1)
    exit(1);
}
