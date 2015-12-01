/*
** my_putnbr_fd.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:55:25 2015 frasse_l
** Last update Tue Dec  1 17:18:22 2015 frasse_l
*/

#include "my.h"

void	my_putnbr_fd(int n, int fd)
{
  if (n < 0)
    my_putchar_fd('-', fd);
  if (n / 10)
    my_putnbr_fd(n > 0 ? n / 10 : -1 * (n / 10), fd);
  my_putchar_fd('0' + (n > 0 ? n % 10 : -1 * (n % 10)), fd);
}
