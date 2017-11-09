/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 14:23:57 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/02 14:24:00 by lhernand         ###   ########.fr       */
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
				if ((i == 1 && j == 1) || (y > 1 && i == y && j == 1))
					ft_putchar('A');
				else if (x > 1 && j == x && (i == 1 || i == y))
					ft_putchar('C');
				else if (i == 1 || j == 1 || i == y || j == x)
					ft_putchar('B');
				else
					ft_putchar(' ');
				j++;
			}
			ft_putchar('\n');
		}
	else if (x >= 0 && y >= 0)
		ft_putchar('\n');
}
