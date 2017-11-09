/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 16:24:18 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/01 13:23:18 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	handle_special_char(char *s, int *i)
{
	while (s[*i] == '\n' || s[*i] == ' ' || s[*i] == '\r'
			|| s[*i] == '\f' || s[*i] == '\t')
		(*i)++;
}

void	initialize1(int *i, int *t, int *sign)
{
	*i = 0;
	*t = 0;
	*sign = 1;
}

int		ft_atoi(char *str)
{
	int i;
	int t;
	int sign;

	initialize1(&i, &t, &sign);
	handle_special_char(str, &i);
	if (str[i] == '-')
	{
		if (str[i + 1] == '+')
			return (0);
		sign = -1;
		i++;
	}
	if (str[i] == '+')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (sign * t);
		t = t * 10 + (str[i] - 48);
		i++;
	}
	return (sign * t);
}
