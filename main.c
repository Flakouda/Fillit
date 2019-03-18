/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floakoud <floakoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 00:29:53 by flakouda          #+#    #+#             */
/*   Updated: 2019/03/18 16:59:19 by floakoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

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
