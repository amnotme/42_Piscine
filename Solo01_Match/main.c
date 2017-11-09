/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 07:44:08 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/08 14:28:42 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2);
int		nmatch(char *s1, char *s2);

int		main(int argc, char **argv)
{	
	if (argc != 3)
	{
		printf("You must enter two arguments.\nBe sure to put them in \" \" marks\n");
		return (0);
	}
	printf("Ex00: => %d\n", match(argv[1], argv[2]));

	printf("Ex01: => %d\n", nmatch(argv[1], argv[2]));
	return (0);
	
}
