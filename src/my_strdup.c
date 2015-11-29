/*
** my_strdup.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:56:22 2015 frasse_l
** Last update Sun Nov 29 16:56:23 2015 frasse_l
*/

#include "my.h"

char	*my_strdup(char *str)
{
  char	*new;
  int	i;

  if (!str)
    return (NULL);
  i = 0;
  new = my_malloc((my_strlen(str) + 1) * sizeof(char));
  while (str[i])
    {
      new[i] = str[i];
      i++;
    }
  new[i] = 0;
  return (new);
}
