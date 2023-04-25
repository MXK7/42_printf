# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 13:39:03 by mpoussie          #+#    #+#              #
#    Updated: 2023/04/24 20:14:02 by mpoussie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC				= 	gcc
RM				= 	rm -rf
CFLAGS			= 	-Wall -Wextra -Werror -I.

SRCS    		=	ft_printf.c \
					function/ft_printf_function.c \
					function/ft_printf_function2.c \
					function/ft_printf_utils.c \
					function/ft_printf_utils2.c \
					libft/ft_is/ft_isalnum.c \
					libft/ft_is/ft_isprint.c \
					libft/ft_is/ft_isalpha.c \
					libft/ft_is/ft_isascii.c \
					libft/ft_is/ft_isdigit.c \
					libft/ft_mem/ft_memcpy.c \
					libft/ft_mem/ft_memcpy.c \
					libft/ft_mem/ft_memmove.c \
					libft/ft_mem/ft_memcmp.c \
					libft/ft_mem/ft_memset.c  \
					libft/ft_mem/ft_memchr.c \
					libft/ft_mem/ft_calloc.c \
					libft/ft_mem/ft_bzero.c \
					libft/ft_put/ft_putnbr_fd.c \
					libft/ft_put/ft_putendl_fd.c \
					libft/ft_put/ft_putstr_fd.c \
					libft/ft_put/ft_putchar_fd.c \
					libft/ft_to/ft_atoi.c \
					libft/ft_to/ft_itoa.c \
					libft/ft_to/ft_tolower.c \
					libft/ft_to/ft_toupper.c \
					libft/ft_str/ft_strchr.c \
					libft/ft_str/ft_strncmp.c \
					libft/ft_str/ft_strlcpy.c \
					libft/ft_str/ft_strdup.c \
					libft/ft_str/ft_strlen.c \
					libft/ft_str/ft_strrchr.c \
					libft/ft_str/ft_strnstr.c \
					libft/ft_str/ft_substr.c \
					libft/ft_str/ft_strmapi.c \
					libft/ft_str/ft_strjoin.c \
					libft/ft_str/ft_strtrim.c \
					libft/ft_str/ft_split.c \
					libft/ft_str/ft_strlcat.c \
					libft/ft_str/ft_striteri.c \

OBJS			=	$(SRCS:.c=.o)

all: ${NAME}

$(NAME):			$(OBJS)
					ar rcs $(NAME) $(OBJS)
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)	
re: fclean ${NAME}

.PHONY: all, clean, fclean, re, libft