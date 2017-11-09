/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 21:28:50 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/01 23:14:27 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (fact);
	while (nb > 0 && nb < 13)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
