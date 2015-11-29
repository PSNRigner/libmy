/*
** my_strlower.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:57:00 2015 frasse_l
** Last update Sun Nov 29 16:57:00 2015 frasse_l
*/

#include "my.h"

char	*my_strlower(char *str)
{
  char	*new;
  int	i;

  if (!str || !(new = my_strdup(str)))
    return (str);
  i = 0;
  while (new[i])
    {
      if (new[i] >= 'A' && new[i] <= 'Z')
	new[i] += 32;
      i++;
    }
  return (new);
}
