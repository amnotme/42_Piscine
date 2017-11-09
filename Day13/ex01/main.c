/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 10:58:45 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/14 15:16:14 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_btree.h"
#include <unistd.h>

void	print(void *str)
{
	printf("%s", str);
}

int		main(void)
{
	
	t_btree *head;
	void	(*pr)(void*);
	pr = &print;
	head = btree_create_node("1");
	head->left = btree_create_node("2");
	head->right = btree_create_node("3");
	head->left->left = btree_create_node("4");
	head->left->right = btree_create_node("5");
	head->right->left = btree_create_node("6");
	head->right->right = btree_create_node("7");

	printf("Prefix: ");
	btree_apply_prefix(head, pr);
	//printf("%d", (ptr));
	return (0);
}
