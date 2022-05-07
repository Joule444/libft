#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);


size_t	ft_strlcpy(char *dest, const char *src, size_t size);

int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);







#endif
