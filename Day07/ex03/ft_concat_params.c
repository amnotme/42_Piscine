/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 22:00:04 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/06 23:11:45 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			tamano(int argc, char **argv)
{
	int	i;
	int	j;
	int	size;

	i = 1;
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			size++;
			j++;
		}
		i++;
	}
	if (argc > 2)
		size += argc - 2;
	return (size);
}

char		*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		size;
	char	*str;

	i = 0;
	k = 0;
	size = tamano(argc, argv);
	str = (char*)malloc(sizeof(char) * (size + 1));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[k++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			str[k++] = '\n';
		i++;
	}
	str[k] = '\0';
	return (str);
}
