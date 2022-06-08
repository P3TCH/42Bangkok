# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snamesst <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/15 12:31:20 by snamesst          #+#    #+#              #
#    Updated: 2022/05/15 12:41:50 by snamesst         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush02.out

SRC = main.c func1.c func2.c func3.c

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.out

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
