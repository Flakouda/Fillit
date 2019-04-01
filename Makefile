# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: floakoud <floakoud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/24 01:09:06 by flakouda          #+#    #+#              #
#    Updated: 2019/04/01 17:18:44 by floakoud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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

NAME = fillit

FLAGS = -Wall -Werror -Wextra

SRC = 	checker.c \
		error.c \
		fill.c \
		ft_fonctions.c \
		main.c \
		solution.c \

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME):
	@make -C libft
	@gcc -c $(FLAGS) $(SRC)
	@echo "object created [$(GREEN)OK$(END)]"
	@gcc $(FLAGS) $(OBJ) -o $(NAME) libft/libft.a
	@echo "exec created [$(GREEN)OK$(END)]"

clean :
	@make clean -C libft
	@rm -rf $(OBJ)
	@echo "objects deleted [$(RED)CLEAR$(END)]"

fclean : clean
	@make fclean -C libft
	@rm -rf $(NAME)
	@echo "exec deleted [$(RED)CLEAR$(END)]"

re : fclean all
