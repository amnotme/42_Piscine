/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:51:54 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/13 20:06:40 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUFF_SIZE 4096

void		ft_putchar(char c);
void		ft_putstr(char *str);

int			main(int argc, char **argv)
{
	int		fd;
	int		read_bytes;
	char	buf[BUFF_SIZE + 1];

	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	while ((read_bytes = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[read_bytes] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}
