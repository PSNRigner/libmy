/*
** my_strbnew.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Mon Nov 30 01:22:59 2015 frasse_l
** Last update Mon Nov 30 01:35:04 2015 frasse_l
*/

#include "my.h"

t_strb		*my_strbnew(char *str)
{
  t_strb	*new;

  new = my_malloc(sizeof(t_strb));
  new->data = my_malloc(sizeof(char) * STRB_ALLOC);
  new->size = STRB_ALLOC;
  new->current = 0;
  my_strbadds(new, str);
  return (new);
}
