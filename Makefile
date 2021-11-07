# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 09:58:33 by rel-maza          #+#    #+#              #
#    Updated: 2021/11/07 09:27:31 by rel-maza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_memset.c ft_isalnum.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_substr.c ft_strjoin.c
NAME = libft.a
INCLUDE = libft.h
FLAGS = gcc -Wall -Wextra -Werror
OBJ = $(SRCS:.c=.o)

$(NAME): $(OBJ)
	$(FLAGS) -c $(SRCS) -I $(INCLUDE)
	ar rc $@ $^

all: $(NAME)
	
clean:
	rm	$(OBJ)

fclean: clean
	rm	$(NAME)

re: fclean all
