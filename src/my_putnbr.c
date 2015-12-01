/*
** my_putnbr.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:55:17 2015 frasse_l
** Last update Tue Dec  1 17:17:59 2015 frasse_l
*/

#include "my.h"

void	my_putnbr(int n)
{
  if (n < 0)
    my_putchar('-');
  if (n / 10)
    my_putnbr(n > 0 ? n / 10 : -1 * (n / 10));
  my_putchar('0' + (n > 0 ? n % 10 : -1 * (n % 10)));
}
