/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 22:01:36 by lhernand          #+#    #+#             */
/*   Updated: 2017/06/29 22:26:35 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_swap(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}