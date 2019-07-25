# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aclavel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/21 19:23:34 by aclavel           #+#    #+#              #
#    Updated: 2019/07/22 16:35:24 by aclavel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	./srcs/ft_putchar.c	\
			./srcs/ft_swap.c	\
			./srcs/ft_putstr.c	\
			./srcs/ft_strlen.c	\
			./srcs/ft_strcmp.c

OBJS	=	${SRCS:.c=.o}

NAME	=	libft.a

CC		=	gcc
RM		=	rm -f

CFLAGS	=	-I./includes -Wall -Werror -Wextra

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
			
re:			fclean all

.PHONY:		all clean fclean re
