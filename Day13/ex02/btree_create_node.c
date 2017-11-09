/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 10:51:51 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/14 11:07:57 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree		*btree_create_node(void *item)
{
	t_btree	*btree;

	btree = (t_btree*)malloc(sizeof(t_btree));
	btree->item = item;
	btree->left = 0;
	btree->right = 0;
	return (btree);
}
