/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
<<<<<<< HEAD
/*   leomainmod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 19:48:49 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/20 01:33:19 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


=======
/*   leomain.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 16:56:15 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/19 21:32:10 by aluu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> aa0125cfa5eeb5b64cddc359969eae027dfb026c
#include "../includes/ft_h.h"
#define BUFF_SIZE 1000000
#include <stdio.h>

int		main(int argc, char **argv)
{
	int fd;
	int file;
	int read_bytes;
	int h;
	int w;
	char buf[BUFF_SIZE + 1];
	char *vars;
	int *test;
<<<<<<< HEAD
	int *ptr;
=======
>>>>>>> aa0125cfa5eeb5b64cddc359969eae027dfb026c

	vars = malloc(sizeof(char) * 4);
	fd = 0;
	file = 1;
	if (argc != 1)
		fd = open(argv[file], O_RDONLY);
	if (fd != -1)
		while ((read_bytes = read(fd, buf, BUFF_SIZE)) > 0)
			buf[read_bytes] = '\0';
	else if (argc == 1)
		while ((read_bytes = read(0, buf, BUFF_SIZE)) > 0)
			buf[read_bytes] = '\0';
	else
		ft_putstr("error");
<<<<<<< HEAD
	 h = height(buf);
	 w = width(buf, &vars);
	ft_putchar('\n');
	test = change_to_one_zeros(buf, &vars);
	ft_putstr(buf);
	ptr = to_numbers(test, w);
	int u = 0;
	while (*ptr != -1)
	{

		u++;
		if (u % w == 0)
		{
			ft_putnbr(*ptr);
			ft_putchar('\n');
		}
		else
		{
				ft_putnbr(*ptr);
		}

		ptr++;
=======
	printf("height: %d\n", h = height(buf));
	printf("width: %d\n", w = width(buf, &vars));
	ft_putchar('\n');
	test = change_to_one_zeros(buf, &vars);
	while (*test != -1)
	{
		printf("%d", *test);
		test++;
>>>>>>> aa0125cfa5eeb5b64cddc359969eae027dfb026c
	}
	return (0);
}
//this gets the height.
int		height(char *buf)
{
	int h;

	h = ft_atoi(buf);
	return (h);
}
//this gets width.
int 	width(char *buf, char **vars)
{
	int w;
	int iterator;
	int count_nl;
	int i;
	int fl_w;

	i = 0;
	count_nl = 0;
	iterator = 0;
	fl_w = 0;
	while (buf[i] != '\0')
	{
		if (buf[i] == '\n')
			count_nl++;
		if (count_nl > 0)
		{
			if ((buf[i] == '\n') && (count_nl == 2))
				w = iterator - 1;
			iterator++;
		}
		else
			fl_w++;
		i++;
	}
	get_char_vars(buf, vars, fl_w);
	return (w);
}

<<<<<<< HEAD
int 	*to_numbers(int *arr, int w)
{
	int k;

	k = 0;
	while (arr[k] != -1)
	{
		if ((k < w) || (arr[k] == 0) || (k % (w) == 0)) 
			k++;
		else
		{
			if ((arr[k - 1] <= arr[k - w - 1]) && (arr[k - 1] <= arr[k - w]))
				arr[k] = arr[k - 1] + 1;
			else if ((arr[k - w - 1] <= arr[k - 1]) && (arr[k - w - 1] <= arr[k - w]))
				arr[k] = arr[k - w - 1] + 1;	
			else
				arr[k] = arr[k - w] + 1;
			k++;
		}
	}
	return (arr);
}

=======
//this grabs char vars from first line. 
>>>>>>> aa0125cfa5eeb5b64cddc359969eae027dfb026c
void	get_char_vars(char *buf, char **vars, int fl_w)
{
	char *start;
	int i;

	i = 0;
	start = *vars;
	while (i < fl_w - 3)
		i++;
	while (i < fl_w)
	{
		**vars = buf[i];
		i++;
		(*vars)++;
	}
	**vars = '\0';
	*vars = start;
}

<<<<<<< HEAD
=======
//converts chars to int arr w/o newline
>>>>>>> aa0125cfa5eeb5b64cddc359969eae027dfb026c
int	*change_to_one_zeros(char *buf, char **vars)
{
	int i;
	int *num;
	int *start;
	char tempvar[4];

	i = 0;
	num = malloc(sizeof(buf)/sizeof(char) * sizeof(int));
	start = num;
	while (i < 4)
	{
		tempvar[i++] = **vars;
		(*vars)++;
	}
	while (i-- > 0)
		(*vars)--;
	while (buf[i] != '\n')
		i++;
	i++;
	while (buf[i] != '\0')
	{
		if (buf[i] == tempvar[0])
		{
			*num = 1;
			num++;
		}
		else if (buf[i] == tempvar[1])
		{
			*num = 0;
			num++;
		}
		i++;
	}
	*num = -1;
	return (start);
}
<<<<<<< HEAD
=======






>>>>>>> aa0125cfa5eeb5b64cddc359969eae027dfb026c
