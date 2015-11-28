#include "my.h"

void	my_free_tab(void **tab)
{
  int	i;

  if (!tab)
    return ;
  i = 0;
  while (tab[i])
    {
      my_free(tab[i]);
      i++;
    }
}
