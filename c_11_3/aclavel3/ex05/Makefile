# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aclavel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 15:50:07 by aclavel           #+#    #+#              #
#    Updated: 2019/07/23 20:42:03 by aclavel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	./srcs/main.c		\
			./srcs/ft_ops.c		\
			./srcs/ft_atoi.c	\
			./srcs/ft_doop.c	\
			./srcs/ft_putnbr.c	\
			./srcs/ft_valid_op.c

NAME	=	do-op
CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Werror -Wextra -I./includes/
OBJS	=	${SRCS:.c=.o}

${NAME}:	${OBJS}
	${CC} -o ${NAME} ${OBJS}
			
all:	${NAME}

clean:
		${RM} ${OBJS}
fclean:		clean
				${RM} ${NAME}
re:			fclean all
.PHONY:		all clean fclean re
