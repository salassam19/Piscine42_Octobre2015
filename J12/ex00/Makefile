# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salassam <salassam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/21 20:13:35 by salassam          #+#    #+#              #
#    Updated: 2015/12/18 16:56:58 by salassam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = main.c ft_display_file.c ft_putstr.c	ft_putchar.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) main.o ft_display_file.o ft_putstr.o ft_putchar.o

clean:
	/bin/rm -f main.o ft_display_file.o ft_putstr.o ft_putchar.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
