/*
** my_putstr_fd.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:55:46 2015 frasse_l
** Last update Sun Nov 29 16:55:46 2015 frasse_l
*/

#include "my.h"

void	my_putstr_fd(char *str, int fd)
{
  int	n;

  n = 0;
  while (str && str[n])
    {
      my_putchar_fd(str[n], fd);
      n++;
    }
}
