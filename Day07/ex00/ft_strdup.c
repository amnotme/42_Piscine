/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:37:36 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/06 14:48:36 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strln(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char		*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	if (!dest && !src)
		return (0);
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	dest = ptr;
	return (dest);
}

char		*ft_strdup(char *src)
{
	int		l;
	char	*des;

	l = ft_strln(src);
	des = (char*)malloc(sizeof(*des) * (l + 1));
	return (ft_strcpy(des, src));
}
