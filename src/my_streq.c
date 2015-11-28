#include "my.h"

t_bool	my_streq(char *s1, char *s2)
{
  return (my_strcmp(s1, s2) == 0);
}
