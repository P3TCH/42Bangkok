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
SRC = 	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
		ft_lstiter.c ft_lstmap.c

OBJ = $(SRC:.c=.o)
B_OBJ = $(BONUS:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)

bonus: all
	$(CC) $(CFLAGS) -c $(BONUS)
	ar rcs $(NAME) $(B_OBJ)

clean:
	rm -f $(OBJ)
	rm -f $(B_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all bonus

.PHONY: clean fclean re all bonus
