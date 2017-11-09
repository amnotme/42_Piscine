/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 15:04:22 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/06 18:59:41 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int i;
	int l;

	i = 0;
	l = max - min;
	if (min >= max)
		return (0);
	range = (int*)malloc(sizeof(*range) * (l));
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
