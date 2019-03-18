/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floakoud <floakoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 00:24:09 by flakouda          #+#    #+#             */
/*   Updated: 2019/03/18 17:26:08 by floakoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char				*ft_read_check(char *argv)
{
	int		fd;
	int		ret;
	int		i;
	char	tmp[545];
	char	buffer[1];

	i = 0;
	fd = open(argv, O_RDONLY) == -1 ? ft_error() : 0;
	while ((ret = read(fd, buffer, 1)))
	{
		tmp[i] = buffer[0];
		i++;
		i > 545 ? ft_error() : 0;
	}
	tmp[i] = '\0';
	close(fd) == -1 ? ft_error() : 0;
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
		*read == '#' ? dieses++ : 0;
		*read == '.' ? points++ : 0;
		if (*read == '\n')
		{
			end_line++;
			if ((*(read + 1) == '\n' || *(read + 1) == '\0') && (end_line % 4))
					ft_error();
		}
		if (*read != '#' && *read != '.' && *read != '\n')
			ft_error();
		read++;
	}
	if (points % 4 || dieses % 4 || (end_line + 1) % 5 || dieses < 4)
		ft_error();
	return (dieses / 4);
}

/*void	ft_map_line_check(char *read)
{
	int		i;
	int		line;

	i = 0;
	line = 0;
	while (read[i])
	{
		if (read[i] == '\n')
		{
			line++;
			if (read[i + 1] == '\n' || read[i + 1] == '\0')
			{
				if (line % 4)
					ft_error();
				line = 0;
				i++;
			}
		}
		i++;
	}
	if (line % 4)
		ft_error();
}*/

void	ft_map_line_check(char *read)
{
	int		line;

	line = 0;
	while (*read)
	{
		if (*read == '\n')
		{
			line++;
			if (*(read + 1) == '\n' || *(read + 1) == '\0')
			{
				if (line % 4)
					ft_error();
				line = 0;
				read++;
			}
		}
		read++;
	}
	if (line % 4)
		ft_error();
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
