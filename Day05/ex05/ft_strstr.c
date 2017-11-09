/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 19:12:30 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/04 01:55:07 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len(char *a)
{
	char *ptr;

	ptr = a;
	while (*a)
		a++;
	return (a - ptr);
}

int				compare(const void *str1, const void *str2, unsigned int l)
{
	const unsigned char *pt1;
	const unsigned char *pt2;

	pt1 = str1;
	pt2 = str2;
	while (l--)
	{
		if (*pt1 != *pt2)
			return (*pt1 - *pt2);
		else
		{
			pt1++;
			pt2++;
		}
	}
	return (0);
}

char			*ft_strstr(char *str, char *to_find)
{
	unsigned int i;

	i = ft_len(to_find);
	while (*str)
		if (!compare(str++, to_find, i))
			return (str - 1);
	return (0);
}
