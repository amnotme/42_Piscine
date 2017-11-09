/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 14:07:55 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/03 19:14:26 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcpy(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
	if (!dest && !src)
		return (0);
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	dest = ptr;
	return (dest);
}
