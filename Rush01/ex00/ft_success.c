/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_success.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 11:30:57 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/09 11:32:47 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include "ft_sudoku.h"

int		ft_get_square(int i)
{
	return (i - i % 3);
}

int		ft_success(int **sudoku, int row, int col, int val)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		if (sudoku[i][col] == val || sudoku[row][i] == val)
			return (0);
		i++;
	}
	i = 0;
	j = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (sudoku[ft_get_square(row) + i][ft_get_square(col) + j] == val)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
