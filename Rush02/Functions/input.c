/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuery <sjuery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 17:06:26 by sjuery            #+#    #+#             */
/*   Updated: 2017/07/16 20:27:04 by sjuery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_h.h"

void	print_solution(int solution[], int hor, int vert)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < 5)
	{
		if (solution[i++])
			count++;
	}
	if (count == 0)
		ft_putstr("Nothing To Match");
	i = 0;
	while (i < 5)
	{
		if (solution[i])
		{
			result(i, hor, vert);
			if (count > 1)
				ft_putstr(" || ");
			count--;
		}
		i++;
	}
	ft_putstr("\n");
}

void	rush_finder(char beg, int solution[], int index)
{
	char const	*c[5] = {"oooo-|", "/\\\\/**", "AACCBB", "ACACBB", "ACCABB"};
	int			i;

	i = 0;
	while (i < 5)
	{
		if (solution[i])
			if (beg != c[i][index])
			{
				solution[i] = 0;
			}
		i++;
	}
}

int		end_lane(char beg)
{
	char const	*str = "o\\/AC";
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] == beg)
			return (1);
		i++;
	}
	return (0);
}

void	ft_read(int solution[], int count[], int ret, char *buf)
{
	if (!ret)
		failure(solution);
	while (ret && result_check(solution))
	{
		buf[1] = '\0';
		if (count[2] == 1 && count[0] == 1 && buf[0] == '\n')
			failure(solution);
		if (count[3])
		{
			inspect_first(count, ret, buf, solution);
			count[0]++;
		}
		else if (((count[1] == 1) && (end_lane(buf[0]))) || count[4])
		{
			count[4] = 1;
			inspect_last(count, solution, buf, ret);
			count[1]++;
		}
		else
			inspect_mid(count, solution, buf);
		ret = read(0, buf, 1);
	}
	print_solution(solution, count[0] - 1, count[2]);
}
