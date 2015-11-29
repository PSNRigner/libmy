/*
** my_atoi.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:53:43 2015 frasse_l
** Last update Sun Nov 29 16:53:45 2015 frasse_l
*/

#include "my.h"

int	my_atoi(char *str)
{
  int	nbr;
  int	i;
  int	sign;

  i = 0;
  nbr = 0;
  sign = (str && str[0] == '-' ? -1 : 1);
  while (str && str[i])
    {
      if (!is_char_nbr(str[i]))
	return (nbr * sign);
      nbr += str[i] - '0';
    }
  return (nbr * sign);
}
