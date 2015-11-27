#include "my.h"

t_bool	is_char_alphanum(char c)
{
  if (c >= '0' && c <= '9')
    return (TRUE);
  if (c >= 'a' && c <= 'z')
    return (TRUE);
  if (c >= 'A' && c <= 'Z')
    return (TRUE);
  return (FALSE);
}
