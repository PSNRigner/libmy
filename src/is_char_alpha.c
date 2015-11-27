#include "my.h"

t_bool	is_char_alpha(char c)
{
  if (c >= 'a' && c <= 'z')
    return (TRUE);
  if (c >= 'A' && c <= 'Z')
    return (TRUE);
  return (FALSE);
}
