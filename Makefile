#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/16 08:16:35 by suvitiel          #+#    #+#              #
#    Updated: 2016/11/20 20:10:53 by suvitiel         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC		= gcc
NAME	= libft.a
SRC		=	ft_putchar.c ft_strlen.c \
			ft_putstr.c	ft_atoi.c \
			ft_putnbr.c ft_strcmp.c \
			ft_strncmp.c
RM		= rm -f
OBJS	= ft_putchar.o ft_strlen.o \
			ft_putstr.o	ft_atoi.o \
			ft_putnbr.o ft_strcmp.o \
			ft_strncmp.o
CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):
		$(CC) $(CFLAGS) -c $(SRC) -I.
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all