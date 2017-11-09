/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 11:32:31 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/09 11:32:35 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include "ft_sudoku.h"

int		ft_solve(int **sudoku, int val)
{
	int x;
	int y;
	int i;

	x = val / 9;
	y = val % 9;
	i = 1;
	if (val >= 81)
		return (1);
	if (sudoku[x][y] != 0)
		return (ft_solve(sudoku, val + 1));
	while (i < 10)
	{
		if (ft_success(sudoku, x, y, i))
		{
			sudoku[x][y] = i;
			if (ft_solve(sudoku, val + 1))
				return (1);
			else
				sudoku[x][y] = 0;
		}
		i++;
	}
	return (0);
}
