# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <lhernand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/15 15:08:43 by lhernand          #+#    #+#              #
#    Updated: 2017/07/16 20:24:15 by sjuery           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RUSH = rush-2
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = -I Includes/ft_h.h
REF = References/ft_putchar.c References/ft_putstr.c References/ft_putnbr.c \
					References/ft_atoi.c
FFILES = Functions/rush2.c Functions/output.c Functions/input.c \
					Functions/verifi.c Functions/lane_inspector.c
REFO = ft_putchar.o ft_putstr.o ft_strcat.o ft_strcmp.o main.o
R0 = References/rush00.c
R1 = References/rush01.c
R2 = References/rush02.c
R3 = References/rush03.c
R4 = References/rush04.c
REXECS = rush-00 rush-01 rush-02 rush-03 rush-04

execs: all
	@$(CC) $(CFLAGS) -o rush-00 $(R0)	$(REF)
	@$(CC) $(CFLAGS) -o rush-01 $(R1)	$(REF)
	@$(CC) $(CFLAGS) -o rush-02 $(R2)	$(REF)
	@$(CC) $(CFLAGS) -o rush-03 $(R3)	$(REF)
	@$(CC) $(CFLAGS) -o rush-04 $(R4)	$(REF)

all: $(RUSH)

$(RUSH):
	@$(CC) $(CFLAGS) -o rush-2 $(FFILES) $(REF) $(HEADER)

clean:
	@/bin/rm -f $(RUSH)

fclean:
	@/bin/rm -f $(REFO) $(REXECS) $(RUSH)

re: fclean execs all
