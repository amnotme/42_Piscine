/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 10:07:02 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/03 14:03:23 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	handle_special_chars(char *s, int *i)
{
	while ((s[*i] == ' ') || (s[*i] == '\v') || (s[*i] == '\r')
			|| (s[*i] == '\t') || (s[*i] == '\f'))
		(*i)++;
}

int		ft_atoi(char *str)
{
	int i;
	int num;
	int sign;

	i = 0;
	num = 0;
	sign = 1;
	handle_special_chars(str, &i);
	if (str[i] == '-')
	{
		if (str[i + 1] == '+')
			return (0);
		sign = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (sign * num);
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}
