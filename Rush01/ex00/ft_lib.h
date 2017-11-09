/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 11:28:47 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/09 11:28:53 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_print_board(int **sudoku);
int			**ft_read_args(char **argv);
int			ft_strlen(char *str);
int			ft_success(int **sudoku, int row, int col, int val);
int			ft_seventeen(int **sudoku);
#endif
