/*
** my_bzero.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:53:58 2015 frasse_l
** Last update Sun Nov 29 16:53:58 2015 frasse_l
*/

#include "my.h"

void		my_bzero(void *ptr, int size)
{
  unsigned char	*cptr;

  cptr = (unsigned char *)ptr;
  while (size--)
    *cptr++ = 0;
}
