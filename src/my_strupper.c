/*
** my_strupper.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:57:29 2015 frasse_l
** Last update Sun Nov 29 16:57:30 2015 frasse_l
*/

#include "my.h"

char	*my_strupper(char *str)
{
  char	*new;
  int	i;

  if (!str || !(new = my_strdup(str)))
    return (str);
  i = 0;
  while (new[i])
    {
      if (new[i] >= 'a' && new[i] <= 'z')
	new[i] -= 32;
      i++;
    }
  return (new);
}
