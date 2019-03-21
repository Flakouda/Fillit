/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floakoud <floakoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 23:55:48 by flakouda          #+#    #+#             */
/*   Updated: 2019/03/21 17:49:17 by floakoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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


void		ft_map_dotes_check(char *read)
{
	int		i;
	int		points;
	int		end_line;

	i = -1;
	points = 0;
	end_line = 0;
	
	while (read[++i])
	{
		read[i] == '.' ? points++ : 0;
		if (read[i] == '\n')
		{
			end_line++;
			(points / 4) == end_line ? 0 : ft_error();
		}
	}
}
