/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 17:13:28 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/04 18:30:09 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strcapitalize(char *str)
{
	int			i;
	char		*ptr;

	i = 0;
	ptr = str;
	if ((str[i] >= 'a') && (str[i] <= 'z'))
		str[i] -= 32;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '-' || str[i] == '+' || str[i] == ','
				|| str[i] == ':' || str[i] == '?' || str[i] == '.'
				|| str[i] == '!')
		{
			i++;
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] -= 32;
		}
		i++;
	}
	str = ptr;
	return (str);
}
