#include "my.h"

void	*my_malloc(unsigned int size)
{
  void	*ptr;

  if (size < 1)
    return (NULL);
  if (!(ptr = malloc(size)))
    exit(1);
  return (ptr);
}
