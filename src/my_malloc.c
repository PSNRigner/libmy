#include "my.h"

void	*my_malloc(int size)
{
  void	*ptr;

  if (!(ptr = malloc(size)))
    exit(1);
  return (ptr);
}
