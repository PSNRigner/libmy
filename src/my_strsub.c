/*
** my_strsub.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:57:17 2015 frasse_l
** Last update Sun Nov 29 16:57:19 2015 frasse_l
*/

#include "my.h"

char	*my_strsub(char *str, unsigned int start, unsigned int len)
{
  char	*new;
  int	i;

  if (!str || start < 0 || len <= 0)
    return (NULL);
  if (!(new = malloc(sizeof(char) * (len + 1))))
    return (NULL);
  i = 0;
  while (str[i + start] && i < len)
    {
      new[i] = str[i + start];
      i++;
    }
  return (new);
}
