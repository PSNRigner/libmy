#include "my.h"

t_bool	is_char_nbr(char c)
{
  if (c >= '0' && c <= '9')
    return (TRUE);
  return (FALSE);
}
