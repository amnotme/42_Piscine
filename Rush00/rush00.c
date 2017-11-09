/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 23:41:36 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/02 14:22:38 by lhernand         ###   ########.fr       */
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
				if ((i == 1 && j == 1) || (i == 1 && j == x)
					|| (j == 1 && i == y) || (i == y && j == x))
					ft_putchar('o');
				else if (x > 1 && (i == 1 || i == y))
					ft_putchar('-');
				else if (y > 1 && (j == 1 || j == x))
					ft_putchar('|');
				else
					ft_putchar(' ');
				j++;
			}
			ft_putchar('\n');
		}
	else if (x >= 0 && y >= 0)
		ft_putchar('\n');
}
