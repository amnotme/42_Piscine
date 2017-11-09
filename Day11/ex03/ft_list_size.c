/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 22:39:47 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/12 23:01:03 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*traverse;

	i = 0;
	traverse = begin_list;
	while (traverse)
	{
		i++;
		traverse = traverse->next;
	}
	return (i);
}
