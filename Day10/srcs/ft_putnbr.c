/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 23:04:42 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/10 21:50:17 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
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
