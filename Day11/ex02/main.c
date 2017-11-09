/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 20:09:21 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/12 22:32:38 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int		main(void)
{
	char *st;
	char *st2;
	char *st3;
	t_list *pt;

	st = "this is 1";
	st2 = "this is 2";
	st3 = "This is 3";

	pt = ft_create_elem(st);
	printf("%s\n", pt->data);
	ft_list_push_front(&pt, st2);
	printf("%s\n", pt->next->data);
	ft_list_push_front(&pt, st3);
	printf("%s\n", pt->next->next->data);
	printf("%s\n", pt->data);
	printf("%s\n", pt->next->data);
	printf("%s\n", pt->next->next->data);

	return (0);

}
