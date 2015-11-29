/*
** is_char_alpha.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:52:16 2015 frasse_l
** Last update Sun Nov 29 16:52:17 2015 frasse_l
*/

#include "my.h"

t_bool	is_char_alpha(char c)
{
  if (c >= 'a' && c <= 'z')
    return (TRUE);
  if (c >= 'A' && c <= 'Z')
    return (TRUE);
  return (FALSE);
}
