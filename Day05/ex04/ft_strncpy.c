/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:15:15 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/03 19:25:42 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*s;
	unsigned int	i;

	i = 0;
	s = dest;
	while ((*src != '\0') && (i != n))
	{
		*dest++ = *src++;
		i++;
	}
	dest = s;
	return (dest);
}
