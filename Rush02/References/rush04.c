/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 14:24:13 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/15 16:39:49 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);
int		ft_atoi(char *str);

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
					ft_putchar('A');
				else if ((y > 1 && i == y && j == 1)
						|| (x > 1 && j == x && i == 1))
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

int		main(int argc, char **argv)
{
	int rx;
	int ry;

	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	rx = ft_atoi(argv[1]);
	ry = ft_atoi(argv[2]);
	rush(rx, ry);
	return (0);
}
