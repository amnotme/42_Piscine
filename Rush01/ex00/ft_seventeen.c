/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_seventeen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 11:41:00 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/09 11:41:03 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"
#include "ft_lib.h"

int		ft_seventeen(int **sudoku)
{
	int i;
	int j;
	int pos;

	i = 0;
	j = 0;
	pos = 0;
	sudoku = (int **)malloc(sizeof(int*) * 9);
	while (i < 9)
	{
		sudoku[i] = (int *)malloc(sizeof(int*) * 9);
		while (j < 9)
		{
			sudoku[j] = (int *)malloc(sizeof(int*) * 9);
			if (sudoku[i][j] != 0)
				pos++;
			i++;
		}
		i = 0;
		j++;
	}
	return (pos);
}
