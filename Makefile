# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/08 14:56:58 by tmejri            #+#    #+#              #
#    Updated: 2022/05/11 10:59:52 by tmejri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
ft_memset.c ft_split.c ft_strchr.c ft_strrchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strchr.c ft_strtrim.c\
 ft_substr.c ft_tolower.c ft_toupper.c ft_striteri.c \

NAME		= libft.a

OBJS		= ${SRCS:.c=.o}

CC		= gcc 

CFLAGS		= -Wall -Wextra -Werror

RM		= rm -f


	

all:		${NAME}

HEADER		= libft.h
${NAME}:	${HEADER} ${OBJS}
			
			ar rc ${NAME} ${OBJS}

			ranlib ${NAME}
clean:
	${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re