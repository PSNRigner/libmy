/*
** my_strstart.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:57:09 2015 frasse_l
** Last update Sun Nov 29 16:57:10 2015 frasse_l
*/

#include "my.h"

t_bool	my_strstart(char *s1, char *s2)
{
  int	i;

  if (!s1 || !s2)
    return (FALSE);
  i = 0;
  while (s1[i] && s2[i] && s1[i] == s2[i])
    i++;
  return (s2[i] == 0);
}
