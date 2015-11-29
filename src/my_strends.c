/*
** my_strends.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:56:33 2015 frasse_l
** Last update Sun Nov 29 16:56:34 2015 frasse_l
*/

#include "my.h"

t_bool	my_strends(char *s1, char *s2)
{
  int	i[2];

  if (!s1 || !s2)
    return (FALSE);
  i[0] = my_strlen(s1);
  i[1] = my_strlen(s2);
  while (i[0] > 0 && i[1] > 0 && s1[i[0]] == s2[i[1]])
    {
      i[0]--;
      i[1]--;
    }
  return (i[1] == 0);
}
