/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floakoud <floakoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 00:24:09 by flakouda          #+#    #+#             */
/*   Updated: 2019/04/01 17:43:41 by floakoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char				*ft_read_check(char *argv)
{
	int		fd;
	int		ret;
	char	tmp[546];

	(fd = open(argv, O_RDONLY)) == -1 ? ft_error() : 0;
	ret = read(fd, tmp, 546);
	ret > 545 ? ft_error() : 0;
	tmp[ret] = 0;
	close(fd) == -1 ? ft_error() : 0;
	return (ft_strdup(tmp));
}

int					ft_map_check(char *read)
{
	int		line;
	int		dotes;
	int		dieses;
	int		i;

	i = -1;
	line = 0;
	dotes = 0;
	dieses = 0;
	while (read[++i])
	{ 
		if ((i % 21 == 0 && i != 0) || read[i + 1] == '\0')
		{
			read[i + 1] == '\0' ? line++ : line--;
			ft_check_map(dieses, line, dotes);
		}
		read[i] == '#' ? dieses ++ : 0;
		read[i] == '\n' ? line++ : 0;
		read[i] == '.' ? dotes++ : 0;
		if (!(read[i] == '#' || read[i] == '.' || read[i] == '\n'))
        	ft_error();
	}
	i < 21 ? ft_error() : 0; 
	return (dieses / 4);
}

void				ft_check_map(int dieses, int line, int dotes)
{
	dieses == line ? 0 : ft_error();
	(dieses + dotes) % 16 == 0 ? 0 : ft_error();
	line % 4  == 0 ? 0 : ft_error();
}

void				ft_check_chaine(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '#')
		i++;
	str[i] = 'x';
	str = ft_check_dieses(i, str);
	ft_count_x(str) != 4 ? ft_error() : 0;
	while (*str)
	{
		*str == 'x' ? *str = '#' : 0;
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
	str[i] == '#' ? str[i] = 'x' : 0;
	return (str);
}
