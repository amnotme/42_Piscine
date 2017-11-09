/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 11:29:15 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/09 11:29:27 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include "ft_sudoku.h"

int		**ft_read_args(char **argv)
{
	int x;
	int y;
	int **sudoku;

	sudoku = (int **)malloc(sizeof(int *) * 9);
	x = 0;
	while (x < 9)
	{
		if (ft_strlen(argv[x]) != 9)
			return (NULL);
		sudoku[x] = (int *)malloc(sizeof(int) * 9);
		y = 0;
		while (y < 9)
		{
			if (argv[x][y] == '.')
				sudoku[x][y] = 0;
			else if (argv[x][y] >= '1' && argv[x][y] <= '9')
				sudoku[x][y] = argv[x][y] - '0';
			else
				return (NULL);
			y++;
		}
		x++;
	}
	return (sudoku);
}
