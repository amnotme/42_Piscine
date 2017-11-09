/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 22:11:35 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/12 22:47:25 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *traverse;

	traverse = ft_create_elem(data);
	if (*begin_list == NULL)
		*begin_list = traverse;
	else
	{
		traverse->next = *begin_list;
		*begin_list = traverse;
	}
}
