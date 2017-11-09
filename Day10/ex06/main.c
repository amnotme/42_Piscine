/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:41:34 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/11 22:45:37 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_do_op(char *left, char operator, char *right);
int		ft_strlen(char *str);

int		main(int argc, char **argv)
{
	int result;
	int rig;

	if (argc != 4)
		return (0);
	rig = ft_atoi(argv[3]);
	if (ft_strlen(argv[2]) != 1)
	{
		ft_putstr("0\n");
		return (0);
	}
	if ((*argv[2] == '/') && (rig == 0))
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if ((*argv[2] == '%') && (rig == 0))
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	result = ft_do_op(argv[1], *argv[2], argv[3]);
	ft_putnbr(result);
	ft_putstr("\n");
	return (0);
}
