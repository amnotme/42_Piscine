/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 19:46:25 by lhernand          #+#    #+#             */
/*   Updated: 2017/06/28 23:18:03 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_is_negative(int n)
{
	int tempn;

	tempn = n;
	if ((tempn >= 0) || (tempn == ' ') || (tempn == '\0'))
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}
