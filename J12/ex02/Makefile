# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salassam <salassam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/21 20:44:37 by salassam          #+#    #+#              #
#    Updated: 2015/12/19 02:33:16 by salassam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRC = ft_tail.c main.c ft_putchar.c ft_putstr.c ft_atoi.c size_files.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) ft_tail.o main.o ft_putchar.o ft_putstr.o ft_atoi.o size_files.o

clean:
	/bin/rm -f ft_tail.o main.o ft_putchar.o ft_putstr.o ft_atoi.o size_files.o

fclean:
	/bin/rm -f $(NAME)

re:
	fclean all
