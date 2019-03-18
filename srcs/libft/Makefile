# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: floakoud <floakoud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 20181106 18:18:31 by florientako       #+#    #+#              #
#    Updated: 20181128 10:07:18 by floakoud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_memset.c					\
		ft_bzero.c					\
		ft_strlen.c					\
		ft_strdup.c					\
		ft_strndup.c				\
		ft_strncpy.c				\
		ft_strnew.c					\
		ft_strsplit.c				\
		ft_strsub.c					\
		ft_nbmot.c					\
		ft_strclen.c				\
		ft_putstr.c					\
		ft_putendl.c				\
		ft_putchar.c				\

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra -c

#**************************************************#

# Couleur !

CLEAR		= \033[2K
UP 			= \033[A
END			= \033[0m

RED			= \033[0;31m
GREEN		= \033[0;32m
YELLOW		= \033[0;33m
BLUE		= \033[0;34m
VIOLET		= \033[0;35m
CYAN		= \033[0;36m
WHITE		= \033[0;37m

#**************************************************#

all : $(NAME)

$(NAME) :
	@gcc $(FLAGS) $(SRC)
	@ar rc $(NAME) $(OBJ)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all
