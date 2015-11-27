
CC	= gcc

AR	= ar rc

RAN	= ranlib

SRC	= src/debug.c		\
	src/my_putchar.c	\
	src/my_putstr.c		\
	src/my_putnbr.c		\
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
	src/my_malloc.c		\
	src/my_bzero.c		\
	src/my_free.c

OBJ	= $(SRC:.c=.o)

NAME	= libmy.a

CFLAGS	= -I./include -Wall -pedantic

all:     $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	$(RAN) $(NAME)

clean:
	$(RM) $(OBJ)

fclean:  clean
	$(RM) $(NAME)

re:	 fclean all
