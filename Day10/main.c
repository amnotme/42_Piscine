/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 20:24:38 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/11 17:54:33 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>

void	ft_putstr(char *str);
int		*ft_map(int *tab, int length, int(*f)(int));
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_foreach(int *tab, int length, void (*f)(int));
int		ft_any(char **tab, int (*f)(char *));
int		ft_count_if(char **tab, int (*f)(char *));
int 	ft_is_sort(int *tab, int length, int (*f)(int, int));
int		times(int a)
{
	return (a * 2);
}
int		one_or_zero(char *str)
{
	char *ptr;
	int i;

	i = 0;
	ptr = str;
	while (str[i] != '\0')
	{
		if (str[0] == 'y')
		{
			return (1);
			i++;
		}
		else
		{
			return (0);
			str[i] = '\0';
		}
	}
	str = ptr;
	return (0);
}

int		ft_sort_ints(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a == b)
		return (0);
	else
		return (1);
}

int		main(void)
{
	int tab1[5] = {0,1,2,3,4};
	int *map_result;
	int i;

	i = 0;

	printf("This is ex01 => ft_foreach\n");
	ft_putstr("input: {0,1,2,3,4} expected: 01234 => ");
	ft_foreach(tab1, 5, &ft_putnbr);
	ft_putchar('\n');

	printf("\nThis is ex02 => ft_map\n");
	map_result = ft_map(tab1, 5, &times);
	ft_putstr("input: {0,1,2,3,4} expected: 02468 => ");
	
	while (i < 5)
	{
		printf("%d", map_result[i]);
		i++;
	}
	free(map_result);
	printf("\n\nThis is ex03 => ft_any\n");
	char *tab2[]= {"ys", "ythis", "wyorking", 0};
	char *tab3[] = {"Why", "isn't", "working", 0};

	ft_putstr("input: {'ys', 'ythis', 'wyorking', 0}  (we are looking for 'y' in arr[i][0]. if so return 0, else return 1. expected: 1 => ");
	printf("%d\n", ft_any(tab2, &one_or_zero));
	ft_putstr("input: {'Why', 'inst', 'working', 0}  (we are looking for 'y' in arr[i][0]. if so return 0, else return 1. expected: 0 => ");
	printf("%d\n", ft_any(tab3, &one_or_zero));
	
	printf("\nThis is ex04 => ft_count_if\n");


	ft_putstr("input: {'ys', 'ythis', 'wyorking', 0}  (we are looking for 'y' in arr[i][0]. count the number of times.) expected: 2 => ");
	printf("%d\n", ft_count_if(tab2, &one_or_zero));
	ft_putstr("input: {'Why', 'inst', 'working', 0}  (we are looking for 'y' in arr[i][0]. count the number of times.) expected: 0 => ");
	printf("%d\n", ft_count_if(tab3, &one_or_zero));

	printf("\nThis is ex05 => ft_is_sort\n");

	int tab4[5] = {5, 6, 7, 8, 9};
	int	tab5[5] = {6, 7, 5, 9, 8};
	int tab6[5] = {10, 10, 10, 10, 10};
	ft_putstr("input: {5, 6, 7, 8, 9} (is it sorted? if so return 1, else return 0.) expected: 1 => ");
	printf("%d\n", ft_is_sort(tab4, 5, &ft_sort_ints));
	ft_putstr("input: {6, 7, 5, 9, 8} (is it sorted? if so return 1, else return 0.) expected: 0 => ");
	printf("%d\n", ft_is_sort(tab5, 5, &ft_sort_ints)); 
	ft_putstr("input: {10, 10, 10, 10, 10} (is it sorted? if so return 1, else return 0.) expected: 1 => ");
	printf("%d\n", ft_is_sort(tab6, 5, &ft_sort_ints));


	return (0);
}
