/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 20:31:03 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/01 21:22:19 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_iis_prime(int nb)
{
	int i;

	i = 2;
	if ((nb < 2) || (nb > 2147483647))
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int			ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	if (ft_iis_prime(i) == 1)
		return (nb);
	while (ft_iis_prime(i) != 1)
	{
		i++;
	}
	return (i);
}
