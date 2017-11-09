/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 18:50:02 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/12 20:00:35 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"
int		main(void)
{

	char *str;
	
	str = "this is a new element";
	printf("%s", ft_create_elem(str)->data);
	return (0);
}
