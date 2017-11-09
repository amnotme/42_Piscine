/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:08:38 by lhernand          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/07/19 22:43:06 by lhernand         ###   ########.fr       */
=======
/*   Updated: 2017/07/19 21:29:19 by aluu             ###   ########.fr       */
>>>>>>> aa0125cfa5eeb5b64cddc359969eae027dfb026c
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
<<<<<<< HEAD
void	get_char_vars(char *buf, char **vars, int w);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		height(char *buf);
int 	width(char *buf, char **vars);
int		*to_numbers(int *arr, int w);
int		*change_to_one_zeros(char *buf, char **vars);
void	ft_putnbr(int nb);
//int 	**chars_to_ints(char *buf, int w, int h);
=======
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int     height(char *buf);
int     width(char *buf, char **vars);
void    get_char_vars(char *buf, char **vars, int w);
int    *change_to_one_zeros(char *buf, char **vars);
>>>>>>> aa0125cfa5eeb5b64cddc359969eae027dfb026c
#endif
