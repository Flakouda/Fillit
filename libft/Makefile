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

NAME = libft.a

SRC =	ft_memset.c					\
		ft_bzero.c					\
		ft_memcpy.c					\
		ft_memccpy.c				\
		ft_memmove.c				\
		ft_memchr.c					\
		ft_memcmp.c					\
		ft_memalloc.c				\
		ft_memdel.c					\
		ft_strlen.c					\
		ft_strdup.c					\
		ft_strcpy.c					\
		ft_strncpy.c				\
		ft_strcat.c					\
		ft_strncat.c				\
		ft_strlcat.c				\
		ft_strchr.c					\
		ft_strrchr.c				\
		ft_strstr.c					\
		ft_strnstr.c				\
		ft_strcmp.c					\
		ft_strncmp.c				\
		ft_strnew.c					\
		ft_strdel.c					\
		ft_strclr.c					\
		ft_striter.c				\
		ft_striteri.c				\
		ft_strmap.c					\
		ft_strmapi.c				\
		ft_strequ.c					\
		ft_strnequ.c				\
		ft_strsub.c					\
		ft_strjoin.c				\
		ft_strjoinfree.c			\
		ft_strfind.c				\
		ft_strtrim.c				\
		ft_strsplit.c				\
		ft_nbmot.c					\
		ft_strclen.c				\
		ft_itoa.c					\
		ft_putstr.c					\
		ft_putstr_fd.c				\
		ft_putendl.c				\
		ft_putendl_fd.c				\
		ft_atoi.c					\
		ft_atoi_base.c				\
		ft_putnbr.c					\
		ft_putnbr_fd.c				\
		ft_putnbr_base.c			\
		ft_is_negative.c			\
		ft_swap.c					\
		ft_isalpha.c				\
		ft_isdigit.c				\
		ft_isalnum.c				\
		ft_isascii.c				\
		ft_isprint.c				\
		ft_isupper.c				\
		ft_toupper.c				\
		ft_islower.c				\
		ft_tolower.c				\
		ft_putchar.c				\
		ft_putchar_fd.c				\
		ft_lstnew.c					\
		ft_lstdelone.c				\
		ft_lstdel.c					\
		ft_lstadd.c					\
		ft_lstiter.c				\
		ft_lstmap.c					\
		ft_advanced_sort_wordtab.c	\
		ft_sort_wordtab.c			\
		ft_tablen.c					\
		ft_sort_integer_table.c		\
		ft_print_words_tables.c		\
		ft_strndup.c				\

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra -c

all : $(NAME)

$(NAME) :
	@gcc $(FLAGS) $(SRC)
	@echo "objects of library created [$(GREEN)OK$(END)]"
	@ar rc $(NAME) $(OBJ)
	@echo "library created [$(GREEN)OK$(END)]"

clean :
	@rm -f $(OBJ)
	@echo "objects of librabry deleted [$(RED)CLEAR$(END)]"

fclean : clean
	@rm -f $(NAME)
	@echo "library deleted [$(RED)CLEAR$(END)]"

re : fclean all
