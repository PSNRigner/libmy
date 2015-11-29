/*
** my_strlen.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:56:52 2015 frasse_l
** Last update Sun Nov 29 16:56:53 2015 frasse_l
*/

#include "my.h"

int	my_strlen(char *str)
{
  int	i;

  if (!str)
    return (0);
  i = 0;
  while (str[i])
    i++;
  return (i);
}
