/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floakoud <floakoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 23:55:48 by flakouda          #+#    #+#             */
/*   Updated: 2019/04/01 16:44:40 by floakoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		ft_error_arguments(void)
{
	ft_putstr("Usage: ./fillit target_file\n");
	exit(0);
}

int		ft_error(void)
{
	ft_putstr("error\n");
	exit(1);
}

void	ft_map_dotes_check(char *str)
{
	int		dotes;
	int		dieses;
	int		end_line;

	dotes = 0;
	dieses = 0;
	end_line = 0;
	while (*str)
	{
		*str == '#' ? dieses++ : 0;
		*str == '.' ? dotes++ : 0;
		if (*str == '\n')
		{
			end_line++;
			printf("el:%d\ndieses:%d\ndotes:%d\n", end_line, dieses, dotes);
			if (end_line % 4 == 0)
				dieses == end_line ? 0 : ft_error();
			end_line % 5 == 0 ? dotes += 4 : 0;
			(dotes + dieses) / 4 == end_line ? 0 : ft_error();
		}
		str++;
	}
}
