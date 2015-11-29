/*
** my_free_tab.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:54:14 2015 frasse_l
** Last update Sun Nov 29 16:54:15 2015 frasse_l
*/
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
