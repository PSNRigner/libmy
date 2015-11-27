#include "my.h"

void		my_bzero(void *ptr, int size)
{
  unsigned char	*cptr;

  cptr = (unsigned char *)ptr;
  while (size--)
    *cptr++ = 0;
}
