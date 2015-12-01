/*
** my_strbadds.c for libmy in /home/Dev/Epitech/libmy
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Mon Nov 30 01:45:32 2015 frasse_l
** Last update Tue Dec  1 17:46:15 2015 frasse_l
*/

#include "my.h"

void	my_strbadds(t_strb *strb, char *str)
{
  int	i;

  if (!str)
    return ;
  i = 0;
  while (str[i])
    {
      my_strbadd(strb, str[i]);
      i++;
    }
}
