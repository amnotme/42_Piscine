/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:19:53 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/11 22:31:48 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
int		ft_atoi(char *str);

int		ft_do_op(char *left, char operator, char *right)
{
	int lef;
	int rig;

	lef = ft_atoi(left);
	rig = ft_atoi(right);
	if (operator == '+')
		return (lef + rig);
	if (operator == '-')
		return (lef - rig);
	if (operator == '*')
		return (lef * rig);
	if ((operator == '/') && (rig != 0))
		return (lef / rig);
	if ((operator == '%') && (rig != 0))
		return (lef % rig);
	return (0);
}
