/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 20:09:21 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/12 23:13:58 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int		main(void)
{
	char *str;
	char *str2;
	char *str3;
	t_list *ptr;
	str = "this is the beginnig node";
	str2 = "this is the second node";
	str3 = "this is the third node";
	ptr = ft_create_elem(str);
	ft_list_push_back(&ptr, str2);

	printf("%s\n", ft_create_elem(str)->data);
	printf("%s\n", ptr->next->data);
	ft_list_push_back(&ptr, str3);
	printf("%s\n", ptr->next->next->data);
	printf("%s\n",ft_list_last(ptr)->data);
	return (0);

}
