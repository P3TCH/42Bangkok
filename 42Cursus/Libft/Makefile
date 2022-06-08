# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/08 01:16:18 by snamesst          #+#    #+#              #
#    Updated: 2022/06/08 01:16:18 by snamesst         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = 	ft_bzero.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_memcpy.c

OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
