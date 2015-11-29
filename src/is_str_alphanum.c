/*
** is_str_alphanum.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:53:05 2015 frasse_l
** Last update Sun Nov 29 16:53:06 2015 frasse_l
*/

#include "my.h"

t_bool	is_str_alphanum(char *str)
{
  int	i;

  if (!str)
    return (FALSE);
  i = 0;
  while (str[i])
    {
      if (!is_char_alphanum(str[i]))
	return (FALSE);
      i++;
    }
  return (TRUE);
}
