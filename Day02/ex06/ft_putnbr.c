/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 12:16:43 by lhernand          #+#    #+#             */
/*   Updated: 2017/06/29 13:35:09 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char c);

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void		ft_putnbr(int nb)
{
	int min;
	int max;

	min = -2147483648;
	max = 2147483647;
	if (nb == min)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= min && nb <= max)
	{
		if (nb < 10)
		{
			ft_putchar(nb + 48);
			return ;
		}
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
}
