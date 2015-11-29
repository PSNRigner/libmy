/*
** my_strcmp.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:56:14 2015 frasse_l
** Last update Sun Nov 29 16:56:14 2015 frasse_l
*/

#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1 && s2 && s1[i] && s2[i] && s1[i] == s2[i])
    i++;
  if (s1 && !s2)
    return (1);
  if (!s1 && s2)
    return (-1);
  if (!s1 && !s2)
    return (0);
  return (s1[i] - s2[i]);
}
