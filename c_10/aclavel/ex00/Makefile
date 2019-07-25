# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aclavel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/24 16:07:20 by aclavel           #+#    #+#              #
#    Updated: 2019/07/24 16:13:57 by aclavel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS	=	./srcs/*

NAME	=	ft_display_file

OBJS	=	${SRCS:.c=.o}

CC		=	gcc

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror -I./includes/

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY	=	all clean fclean re
