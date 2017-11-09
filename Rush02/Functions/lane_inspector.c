/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lane_inspector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuery <sjuery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 11:02:02 by sjuery            #+#    #+#             */
/*   Updated: 2017/07/16 19:26:36 by sjuery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_h.h"

void	inspect_first(int count[], int ret, char *buf, int result[])
{
	if (count[0] == 1)
	{
		rush_finder(buf[0], result, 0);
		ret = read(0, buf, 1);
		if (!(ret && buf[0] == '\n'))
			count[0]++;
	}
	if (count[0] != 1 && end_lane(buf[0]))
	{
		rush_finder(buf[0], result, 1);
		ret = read(0, buf, 1);
		buf[1] = '\0';
		if (buf[0] == '\n')
			count[3] = 0;
		else
			failure(result);
	}
	else if (buf[0] != '\n')
		rush_finder(buf[0], result, 4);
}

void	inspect_mid(int count[], int result[], char *buf)
{
	if (count[1] > count[0] + 1)
		failure(result);
	if (buf[0] == '\n')
	{
		count[2] += 1;
		if (count[1] != count[0])
			failure(result);
		count[1] = 1;
	}
	else
	{
		if (count[1] == 1 || count[1] == count[0] - 1)
			rush_finder(buf[0], result, 5);
		else
		{
			if (buf[0] != ' ')
				failure(result);
		}
		count[1] += 1;
	}
}

void	inspect_last(int count[], int result[], char *buf, int ret)
{
	if (count[1] == 1)
	{
		rush_finder(buf[0], result, 2);
		count[2] += 1;
	}
	else if (count[1] > 1 && end_lane(buf[0]))
	{
		rush_finder(buf[0], result, 3);
		ret = read(0, buf, 1);
		buf[1] = '\0';
		if (buf[0] == '\n')
		{
			ret = read(0, buf, 1);
			if (ret)
				failure(result);
		}
		else
			failure(result);
	}
	else
		rush_finder(buf[0], result, 4);
}
