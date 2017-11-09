/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 23:09:17 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/12 23:18:06 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list			*ft_list_last(t_list *begin_list)
{
	t_list		*traverse;

	traverse = begin_list;
	if (traverse == 0)
		return (0);
	while (traverse->next)
	{
		traverse = traverse->next;
	}
	return (traverse);
}
