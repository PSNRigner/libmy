/*
** my_strbadd.c for libmy in /home/Dev/Epitech/libmy
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Mon Nov 30 01:43:29 2015 frasse_l
** Last update Mon Nov 30 01:45:23 2015 frasse_l
*/

#include "my.h"

void	my_strbadd(t_strb *strb, char c)
{
  if (!strb)
    return ;
  if (strb->current >= strb->size)
    my_strbrealloc(strb);
  strb->data[strb->current] = c;
  strb->current++;
}
