/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 09:01:41 by lhernand          #+#    #+#             */
/*   Updated: 2017/06/29 10:55:46 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char c);

void		ft_putnbr(int nb);

void		ft_print_comb2(void)
{
	int i;
	int j;

	i = -1;
	while (i++ < 99)
	{
		j = i;
		while (j++ < 99)
		{
			if ((i == 98) && (j == 99))
			{
				ft_putnbr(i);
				ft_putchar(' ');
				ft_putnbr(j);
				return ;
			}
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putnbr(j);
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void		ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
		ft_putchar('0');
		return ;
	}
	else if ((nb > 0) && (nb <= 9))
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
		return ;
	}
	else
	{
		ft_putchar((nb / 10) + 48);
		ft_putchar((nb % 10) + 48);
		return ;
	}
}
