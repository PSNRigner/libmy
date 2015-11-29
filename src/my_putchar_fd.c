/*
** my_putchar_fd.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:55:04 2015 frasse_l
** Last update Sun Nov 29 16:55:05 2015 frasse_l
*/

#include "my.h"

void	my_putchar_fd(char c, int fd)
{
  if (write(fd, &c, 1) != 1)
    exit(1);
}
