/*
** my_strbtostr.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Mon Nov 30 01:36:06 2015 frasse_l
** Last update Mon Nov 30 01:41:59 2015 frasse_l
*/

#include "my.h"

char	*my_strbtostr(t_strb *strb)
{
  char	*new;
  int	i;

  if (!strb)
    return (NULL);
  new = my_malloc(sizeof(char) * (strb->current + 1));
  i = 0;
  while (i < strb->current)
    {
      new[i] = strb->data[i];
      i++;
    }
  return (new);
}
