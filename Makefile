##
## Makefile for libmy in /home/Dev/Epitech/libmy
## 
## Made by frasse_l
## Login   <frasse_l@epitech.net>
## 
## Started on  Sun Nov 29 16:51:27 2015 frasse_l
## Last update Mon Nov 30 02:29:33 2015 frasse_l
##

CC	= gcc

AR	= ar rc

RAN	= ranlib

SRC	= src/my_debug.c		\
	src/my_putchar.c	\
	src/my_putstr.c		\
	src/my_putnbr.c		\
	src/my_streq.c		\
	src/my_putchar_fd.c	\
	src/my_putstr_fd.c	\
	src/my_putnbr_fd.c	\
	src/my_strlen.c		\
	src/is_char_nbr.c	\
	src/is_char_alpha.c	\
	src/is_char_alphanum.c	\
	src/is_str_nbr.c	\
	src/is_str_alpha.c	\
	src/is_str_alphanum.c	\
	src/is_str_empty.c	\
	src/my_strdup.c		\
	src/my_strcat.c		\
	src/my_strcmp.c		\
	src/my_strstart.c	\
	src/my_strends.c	\
	src/my_strsub.c		\
	src/my_strupper.c	\
	src/my_strlower.c	\
	src/my_malloc.c		\
	src/my_bzero.c		\
	src/my_atoi.c		\
	src/my_free.c		\
	src/my_free_tab.c	\
	src/my_strbrealloc.c	\
	src/my_strbnew.c	\
	src/my_strbtostr.c	\
	src/my_strbadd.c	\
	src/my_strbadds.c

OBJ	= $(SRC:.c=.o)

NAME	= libmy.a

CFLAGS	= -I./include -Wall -pedantic -Werror -ansi

all:     $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	$(RAN) $(NAME)

clean:
	$(RM) $(OBJ)

fclean:  clean
	$(RM) $(NAME)

re:	 fclean all
