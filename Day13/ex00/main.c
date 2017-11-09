/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 10:58:45 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/14 11:29:04 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_btree.h"

int		main(void)
{
	char *str;

	str = "this the initial node";
	printf("%s", btree_create_node(str)->item);
	return (0);
}
