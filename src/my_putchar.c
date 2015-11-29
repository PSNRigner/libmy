/*
** my_putchar.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:54:53 2015 frasse_l
** Last update Sun Nov 29 16:54:54 2015 frasse_l
*/

#include "my.h"

void	my_putchar(char c)
{
  if (write(1, &c, 1) != 1)
    exit(1);
}
