/*
** my_strbrealloc.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Mon Nov 30 01:27:52 2015 frasse_l
** Last update Mon Nov 30 01:37:38 2015 frasse_l
*/

#include "my.h"

void	my_strbrealloc(t_strb *strb)
{
  char	*new;
  int	i;

  if (!strb)
    return ;
  new = my_malloc(sizeof(char) + strb->size + STRB_ALLOC);
  i = 0;
  while (i < STRB_ALLOC)
    {
      new[i] = strb->data[i];
      i++;
    }
  my_free(strb->data);
  strb->data = new;
  strb->size += STRB_ALLOC;
}
