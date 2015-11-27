#include "my.h"

t_bool	is_str_alphanum(char *str)
{
  int	i;

  if (!str)
    return (FALSE);
  i = 0;
  while (str[i])
    {
      if (!is_char_alphanum(str[i]))
	return (FALSE);
      i++;
    }
  return (TRUE);
}
