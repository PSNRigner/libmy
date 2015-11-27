#include "my.h"

void	my_free(void *ptr)
{
  if (!ptr)
    return ;
  free(ptr);
}
