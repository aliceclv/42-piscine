# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchemoun <jchemoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/20 08:57:01 by jchemoun          #+#    #+#              #
#    Updated: 2019/07/21 19:18:00 by jchemoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	rush-02
FLAG	=	-Wall -Werror -Wextra
SRC		=	$(addprefix src/, ft_split.c funct_lib.c main.c print_nbr.c read_file.c rush.c struct.c verif.c)
OBJ		=	$(SRC:.c=.o)
INC		=	include/
CC		= 	gcc
RM		=	rm -rf

all		:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CC) $(FLAG) -o $@ $^ -I $(INC)

%.o		:	%.c
		$(CC) $(FLAG) -I $(INC) -c $< -o $@

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re		:	fclean all
