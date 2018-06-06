/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 00:29:53 by flakouda          #+#    #+#             */
/*   Updated: 2018/01/04 16:16:53 by thescriv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		main(int argc, char **argv)
{
	t_struct	*block;
	char		*read;
	char		**finish;

	if (argc != 2)
		ft_error_arguments();
	read = ft_read_check(argv[1]);
	block = ft_block(read);
	block = ft_default_xy(block);
	finish = ft_result(block, ft_max_size(block));
	free(block);
	while (*finish)
		ft_putendl(*finish++);
	return (0);
}

void	ft_map_line_check(char *read)
{
	int		i;
	int		ct;
	int		line;

	i = 0;
	ct = 0;
	line = 0;
	while (read[i])
	{
		if (read[i] == '\n')
		{
			line++;
			if (read[i + 1] == '\n' || read[i + 1] == '\0')
			{
				ct++;
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
}
