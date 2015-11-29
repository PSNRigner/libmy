/*
** my_streq.c for libmy in /home/Dev/Epitech/libmy/src
** 
** Made by frasse_l
** Login   <frasse_l@epitech.net>
** 
** Started on  Sun Nov 29 16:56:40 2015 frasse_l
** Last update Sun Nov 29 16:56:41 2015 frasse_l
*/

#include "my.h"

t_bool	my_streq(char *s1, char *s2)
{
  return (my_strcmp(s1, s2) == 0);
}
