/*
** my_malloc.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:54:37 2015 frasse_l
** Last update Sun Nov 29 16:54:38 2015 frasse_l
*/

#include "my.h"

void	*my_malloc(unsigned int size)
{
  void	*ptr;

  if (size < 1)
    return (NULL);
  if (!(ptr = malloc(size)))
    exit(1);
  return (ptr);
}
