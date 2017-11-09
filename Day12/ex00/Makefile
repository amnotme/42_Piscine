# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 17:47:56 by lhernand          #+#    #+#              #
#    Updated: 2017/07/13 19:32:46 by lhernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_display_file
CFILES = ft_putchar.c ft_putstr.c main.c

all: $(NAME)

$(NAME): $(CFILES)
	@$(CC) $(CFLAGS) -o $(NAME) $(CFILES)

clean:
	@/bin/rm -f $(NAME)

fclean:
	@/bin/rm -f $(NAME)

re: fclean all
