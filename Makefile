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

NAME = fillit

LIBFT =	srcs/libft

SRC_PATH = srcs/

SRC_POS = $(addprefix $(SRC_PATH),$(SRC))

SRC =	checker.c	\
		error.c		\
		fill.c		\
		fonctions.c	\
		main.c		\
		solution.c	\


OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

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

all	:	$(NAME)

$(NAME) :
	@make -C $(LIBFT)
	@gcc $(FLAGS) -c $(SRC_POS)
	@gcc $(FLAGS) $(OBJ) srcs/libft/libft.a -o $(NAME)

clean	:
	@make clean -C $(LIBFT)
	@rm -f $(OBJ)

fclean	:	clean
	@make fclean -C $(LIBFT)
	@rm -f $(NAME)

re	:	fclean	all
