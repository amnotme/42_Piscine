/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuery <sjuery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 21:59:44 by sjuery            #+#    #+#             */
/*   Updated: 2017/07/16 20:25:44 by sjuery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_h.h"

void	failure(int solution[])
{
	int i;

	i = 0;
	while (i < 5)
	{
		solution[i] = 0;
		i++;
	}
}

int		result_check(int solution[])
{
	int i;

	i = 0;
	while (i < 5)
	{
		if (solution[i])
			return (1);
		i++;
	}
	return (0);
}
