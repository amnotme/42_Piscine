/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 11:33:55 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/09 11:33:58 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include "ft_sudoku.h"

int		main(int argc, char **argv)
{
	int **sudoku;

	if (argc == 10)
	{
		sudoku = ft_read_args(&argv[1]);

		if (sudoku == NULL)
		{
			ft_putstr("Error\n");
			return (1);
		}
		if (ft_solve(sudoku, 0))
			ft_print_board(sudoku);
		else
		{
			ft_putstr("Error\n");
		}
	}
	return (0);
}
