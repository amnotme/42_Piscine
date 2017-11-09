/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 19:04:11 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/06 21:53:02 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int l;

	i = 0;
	l = max - min;
	if (l < 0)
	{
		*range = 0;
		return (0);
	}
	*range = (int*)malloc(sizeof(int) * l);
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (i);
}
