# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salassam <salassam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/21 20:44:37 by salassam          #+#    #+#              #
#    Updated: 2015/12/19 02:32:16 by salassam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ft_cat.c main.c ft_putchar.c ft_putstr.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) ft_cat.o main.o ft_putchar.o ft_putstr.o

clean:
	/bin/rm -f ft_cat.o main.o ft_putchar.o ft_putstr.o

fclean: clean
	/bin/rm -f $(NAME)

re:
	fclean all
