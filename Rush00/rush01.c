/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 14:23:18 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/02 14:33:01 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	i;
	int j;

	i = 0;
	if (x > 0 && y > 0)
		while (i++ <= y - 1)
		{
			j = 1;
			while (j <= x)
			{
				if ((i == 1 && j == 1) || (i == y && j == x && y > 1 && x > 1))
					ft_putchar(47);
				else if ((y > 1 && i == y && j == 1)
						|| (x > 1 && j == x && i == 1))
					ft_putchar(92);
				else if (i == 1 || j == 1 || i == y || j == x)
					ft_putchar(42);
				else
					ft_putchar(' ');
				j++;
			}
			ft_putchar('\n');
		}
	else if (x >= 0 && y >= 0)
		ft_putchar('\n');
}
