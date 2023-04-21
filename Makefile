# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 13:39:03 by mpoussie          #+#    #+#              #
#    Updated: 2023/04/21 09:01:02 by mpoussie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC				= gcc
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror -I.

SRCS    		=	ft_printf.c \
					ft_printf_function.c \
					ft_printf_utils.c \

OBJS			=	$(SRCS:.c=.o)

all: ${NAME}

${NAME}:		${OBJS}
				ar rcs $(NAME) ${OBJS}
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)	
re: fclean ${NAME}

.PHONY: all, clean, fclean, re
