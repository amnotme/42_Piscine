# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/14 11:17:49 by lhernand          #+#    #+#              #
#    Updated: 2017/07/14 15:48:24 by lhernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = btree_apply_suffix
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJECTS = btree_apply_infix.o btree_create_node.o btree_apply_prefix.o main.o \
		  btree_apply_suffix.o
CFILES = btree_apply_infix.c btree_create_node.c btree_apply_prefix.c main.c \
		 btree_apply_suffix.c
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

re: fclean exec
