/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuery <sjuery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 08:19:16 by sjuery            #+#    #+#             */
/*   Updated: 2017/07/16 20:25:35 by sjuery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_h.h"

int		main(void)
{
	int		solution[5];
	int		count[5];
	int		ret;
	char	buf[1 + 1];

	ret = read(0, buf, 1);
	buf[1] = '\0';
	demands(solution);
	second_demands(count);
	ft_read(solution, count, ret, buf);
	return (0);
}

void	demands(int tab[])
{
	tab[0] = 1;
	tab[1] = 1;
	tab[2] = 1;
	tab[3] = 1;
	tab[4] = 1;
}

void	second_demands(int tab[])
{
	tab[0] = 1;
	tab[1] = 1;
	tab[2] = 1;
	tab[3] = 1;
	tab[4] = 0;
}
