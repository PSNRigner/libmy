#include "my.h"

t_bool	is_str_nbr(char *str)
{
  int	i;

  if (!str)
    return (FALSE);
  i = 0;
  while (str[i])
    {
      if (!is_char_nbr(str[i]))
	return (FALSE);
      i++;
    }
  return (TRUE);
}
