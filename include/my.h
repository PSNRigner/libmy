#ifndef	MY_H_
# define MY_H_

# include <stdlib.h>

# define TRUE	1
# define FALSE	0	

typedef	char	t_bool;

/*
** Input & Output stream functions
*/

void	my_putchar(char c);
void	my_putstr(char *str);
void	my_putnbr(int n);
char	*get_next_line(int fd);

/*
** Strings functions
*/

int	my_strlen(char *str);
t_bool	is_char_nbr(char c);
t_bool	is_char_alpha(char c);
t_bool	is_char_alphanum(char c);
t_bool	is_str_nbr(char *str);
t_bool	is_str_alpha(char *str);
t_bool	is_str_alphanum(char *str);
t_bool	is_str_empty(char *str);
char	*my_strdup(char *str);
char	*my_strcat(char *str1, char *str2);

/*
** Memory functions
*/

void	*my_malloc(int size);
void	my_free(void *ptr);
void	my_bzero(void *ptr, int size);

/*
** Other functions
*/

# ifdef	DEBUG
void	debug();
# endif	/* !DEBUG */

#endif	/* !MY_H_ */
