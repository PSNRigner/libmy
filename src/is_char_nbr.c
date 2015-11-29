/*
** is_char_nbr.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:52:39 2015 frasse_l
** Last update Sun Nov 29 16:52:40 2015 frasse_l
*/

#include "my.h"

t_bool	is_char_nbr(char c)
{
  if (c >= '0' && c <= '9')
    return (TRUE);
  return (FALSE);
}
