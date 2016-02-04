# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salassam <salassam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/01 16:54:07 by salassam          #+#    #+#              #
#    Updated: 2016/01/01 17:00:54 by salassam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS = print.c main.c bsq_file.c outils.c other.c errors.c ft_atoi.c get.c

OBJ = print.o main.o bsq_file.o outils.o other.o errors.o ft_atoi.o get.o

LIB = libft.h

all : $(NAME)

$(NAME) :
	gcc -c -Wall -Werror -Wextra $(SRCS) -I $(LIB)
	gcc -o $(NAME) $(OBJ)

clean :
	/bin/rm -f $(OBJ)

fclean : clean 
	/bin/rm -f $(NAME)

re : fclean all
