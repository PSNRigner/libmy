#include "my.h"

t_bool	is_str_empty(char *str)
{
  if (!str || !str[0])
    return (TRUE);
  return (FALSE);
}
