# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/11 18:20:12 by lhernand          #+#    #+#              #
#    Updated: 2017/07/11 22:39:17 by lhernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op
CC		= gcc
CFILES	= ft_putchar.c ft_putstr.c ft_putnbr.c ft_atoi.c ft_do_op.c  main.c \
		  ft_strlen.c
CFLAGS	?= -Wall -Wextra

all: $(NAME)

$(NAME): $(CFILES)
	@$(CC) $(CFLAGS) -o $(NAME) $(CFILES)

clean:
	@/bin/rm -f $(NAME)

fclean:
	@/bin/rm -f $(NAME)

re: fclean all
