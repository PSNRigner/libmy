/*
** my_free.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:54:07 2015 frasse_l
** Last update Sun Nov 29 16:54:08 2015 frasse_l
*/

#include "my.h"

void	my_free(void *ptr)
{
  if (!ptr)
    return ;
  free(ptr);
}
