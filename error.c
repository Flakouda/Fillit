/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floakoud <floakoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 23:55:48 by flakouda          #+#    #+#             */
/*   Updated: 2019/03/21 18:41:49 by floakoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_error_arguments(void)
{
	ft_putstr("Usage: ./fillit target_file\n");
	exit(0);
}

int			ft_error(void)
{
	ft_putstr("error\n");
	exit(1);
}

void		ft_map_dotes_check(char *read)
{
	int		i;
	int		points;
	int		end_line;
	int		dieses;

	i = -1;
	points = 0;
	end_line = 0;
	dieses = 0;
	while (read[++i])
	{
		read[i] == '#' ? dieses++ : 0;
		read[i] == '.' ? points++ : 0;
		if (read[i] == '\n')
		{
			end_line++;
			if ('\n' < 5)
				((points + dieses) / 4) == end_line ? 0 : ft_error();
		}
	}
}
