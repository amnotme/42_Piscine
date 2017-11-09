# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/14 11:17:49 by lhernand          #+#    #+#              #
#    Updated: 2017/07/14 11:55:11 by lhernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = btree_create_node
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJECTS = btree_create_node.o main.o
CFILES = btree_create_node.c main.c
HEADERS = ft_btree.h

exec: all
	@$(CC) -I. -o $(EXEC) $(CFILES)

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(CFILES)

$(OBJECTS): $(CFILES)
	@$(CC) -c $(CFLAGS) $(CFILES)

clean:
	@/bin/rm -f $(OBJECTS)

fclean:
	@/bin/rm -f $(OBJECTS) $(NAME) $(EXEC)

re: fclean all
