/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 16:43:33 by lhernand          #+#    #+#             */
/*   Updated: 2017/06/30 11:36:14 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrtuvwxyz", 26);
}

int main(void)
{
	ft_print_alphabet();
	return (0);
}
