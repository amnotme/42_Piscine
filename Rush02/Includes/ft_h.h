/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuery <sjuery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 16:55:26 by sjuery            #+#    #+#             */
/*   Updated: 2017/07/16 19:43:57 by sjuery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	result(int rush, int hor, int vert);
void	failure(int solution[]);
int		result_check(int solution[]);
void	print_solution(int solution[], int line, int col);
void	rush_finder(char beg, int solution[], int index);
int		end_lane(char beg);
void	demands(int tab[]);
void	second_demands(int tab[]);
void	ft_read(int solution[], int count[], int ret, char *buf);
void	inspect_first(int count[], int ret, char *buf, int solution[]);
void	inspect_mid(int count[], int solution[], char *buf);
void	inspect_last(int count[], int solution[], char *buf, int ret);

#endif
