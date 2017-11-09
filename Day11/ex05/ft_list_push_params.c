/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 23:24:13 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/12 23:41:22 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*traverse;
	t_list	*new_traverse;
	int		i;

	i = 1;
	while (i < ac)
	{
		new_traverse = ft_create_elem(av[i]);
		new_traverse->next = traverse;
		traverse = new_traverse;
		i++;
	}
	return (traverse);
}
