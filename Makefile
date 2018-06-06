# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/24 01:09:06 by flakouda          #+#    #+#              #
#    Updated: 2018/01/02 16:12:37 by thescriv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Werror -Wextra

SRC = 	srcs/checker.c \
		srcs/error.c \
		srcs/fill.c \
		srcs/ft_fonctions.c \
		srcs/main.c \
		srcs/solution.c \
		srcs/ft_libft.c \
		srcs/ft_strsplit.c \
		srcs/ft_libft2.c\

OBJ = checker.o error.o fill.o ft_fonctions.o main.o solution.o ft_libft.o\
ft_strsplit.o ft_libft2.o

all : $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	gcc $(FLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
