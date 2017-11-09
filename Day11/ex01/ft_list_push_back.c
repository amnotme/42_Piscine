/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 20:03:15 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/12 21:42:55 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*traverse;

	if (*begin_list)
	{
		 traverse = *begin_list;
		 while (traverse->next)
		 {
		 	traverse = traverse->next;
		 }
		 traverse->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
