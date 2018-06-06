/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 00:24:09 by flakouda          #+#    #+#             */
/*   Updated: 2018/01/04 16:06:22 by thescriv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char				*ft_read_check(char *argv)
{
	int		fd;
	int		ret;
	int		i;
	char	tmp[545];
	char	buffer[1];

	i = 0;
	if ((fd = open(argv, O_RDONLY)) == -1)
		ft_error();
	while ((ret = read(fd, buffer, 1)))
	{
		tmp[i] = buffer[0];
		i++;
		if (i > 545)
			ft_error();
	}
	tmp[i] = '\0';
	if ((close(fd)) == -1)
		ft_error();
	return (ft_strdup(tmp));
}

int					ft_map_check(char *read)
{
	int		points;
	int		dieses;
	int		end_line;

	points = 0;
	dieses = 0;
	end_line = 0;
	while (*read)
	{
		if (*read == '#')
			dieses++;
		else if (*read == '.')
			points++;
		else if (*read == '\n')
			end_line++;
		else
			ft_error();
		read++;
	}
	if (dieses < 4)
		ft_error();
	if (points % 4 || dieses % 4 || (end_line + 1) % 5)
		ft_error();
	return (dieses / 4);
}

void				ft_check_chaine(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '#')
		i++;
	str[i] = 'x';
	str = ft_check_dieses(i, str);
	if (ft_count_x(str) != 4)
		ft_error();
	while (*str)
	{
		if (*str == 'x')
			*str = '#';
		str++;
	}
}

char				*ft_check_dieses(int i, char *str)
{
	if (str[i + 1] == '#')
	{
		str[i + 1] = 'x';
		str = ft_check_dieses(i + 1, str);
	}
	if (str[i - 1] >= 0 && str[i - 1] == '#')
	{
		str[i - 1] = 'x';
		str = ft_check_dieses(i - 1, str);
	}
	if (i + 5 <= 20 && str[i + 5] == '#')
	{
		str[i + 5] = 'x';
		str = ft_check_dieses(i + 5, str);
	}
	if (i - 5 >= 0 && str[i - 5] == '#')
	{
		str[i - 5] = 'x';
		str = ft_check_dieses(i - 5, str);
	}
	if (str[i] == '#')
		str[i] = 'x';
	return (str);
}
