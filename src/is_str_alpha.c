#include "my.h"

t_bool	is_str_alpha(char *str)
{
  int	i;

  if (!str)
    return (FALSE);
  i = 0;
  while (str[i])
    {
      if (!is_char_alpha(str[i]))
	return (FALSE);
      i++;
    }
  return (TRUE);
}
