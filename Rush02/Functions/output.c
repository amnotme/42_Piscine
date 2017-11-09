/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuery <sjuery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:16:06 by sjuery            #+#    #+#             */
/*   Updated: 2017/07/16 20:25:23 by sjuery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_h.h"

void	result(int rush, int hor, int vert)
{
	ft_putstr("[rush-0");
	ft_putnbr(rush);
	ft_putstr("] [");
	ft_putnbr(hor);
	ft_putstr("] [");
	ft_putnbr(vert);
	ft_putstr("]");
}
