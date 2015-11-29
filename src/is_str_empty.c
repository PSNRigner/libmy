/*
** is_str_empty.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:53:22 2015 frasse_l
** Last update Sun Nov 29 16:53:23 2015 frasse_l
*/

#include "my.h"

t_bool	is_str_empty(char *str)
{
  if (!str || !str[0])
    return (TRUE);
  return (FALSE);
}
