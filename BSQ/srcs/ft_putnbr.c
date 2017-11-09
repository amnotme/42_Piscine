/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 22:06:09 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/19 22:07:34 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_h.h"

void	ft_pstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_pstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if ((nb >= -2147483648) && (nb <= 2147483647))
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
