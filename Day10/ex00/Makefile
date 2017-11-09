# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/10 18:59:16 by lhernand          #+#    #+#              #
#    Updated: 2017/07/10 19:43:32 by lhernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
CFILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
		 srcs/ft_strlen.c srcs/ft_swap.c
NAME = libft.a
CC = gcc 
CFLAGS ?= -Wall -Wextra -fsanitize=address
CFLAGS += -I includes/

SRCSF = $(addsuffix srcs/, $(CFILES))
OBJSF = $(addsuffix srcs/, $(SRC))


all: $(NAME)

$(NAME): $(SRC)
	ar rc $(NAME) $(CFILES)

$(SRC): $(CFILES)
	$(CC) -c $(CFLAGS) $(CFILES)

clean:
	/bin/rm -f $(SRC)

fclean:
	/bin/rm -f $(SRC) $(NAME)

re: fclean all 
