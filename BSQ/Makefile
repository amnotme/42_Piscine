# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/17 15:23:36 by lhernand          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2017/07/19 22:11:07 by lhernand         ###   ########.fr        #
=======
#    Updated: 2017/07/18 18:17:18 by lhernand         ###   ########.fr        #
>>>>>>> aa0125cfa5eeb5b64cddc359969eae027dfb026c
#                                                                              #
# **************************************************************************** #

CC = gcc
<<<<<<< HEAD
CFILES = srcs/ft_atoi.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/leomainmod.c \
		 srcs/ft_strlen.c srcs/ft_putnbr.c
OFILES = ft_atoi.o ft_putchar.o ft_putstr.o leomainmod.o ft_strlen.o \
		 ft_putnbr.o
=======
CFILES = srcs/ft_atoi.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/main.c \
		 srcs/ft_strlen.c
OFILES = ft_atoi.o ft_putchar.o ft_putstr.o main.o ft_strlen.o
>>>>>>> aa0125cfa5eeb5b64cddc359969eae027dfb026c
CFLAGS ?= -Wall -Wextra -Werror -fsanitize=address
CFLAGS += -I includes/
LIBNAME = libft.a
NAME = bsq

exec: all
	@$(CC) -I. -o $(NAME) $(CFILES)

all: $(LIBNAME)

$(LIBNAME): $(OFILES)
	@ar rc $(LIBNAME) $(CFILES)

$(OFILES): $(CFILES)
	@$(CC) -c $(CFLAGS) $(CFILES)

clean:
	@/bin/rm -f $(OFILES)

fclean:
	@/bin/rm -f $(OFILES) $(LIBNAME) $(NAME)

re: fclean all exec
