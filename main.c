/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floakoud <floakoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 00:29:53 by flakouda          #+#    #+#             */
/*   Updated: 2019/04/01 14:59:26 by floakoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_free_tab(char **tab)
{
	int i;

	i = -1;
	while (tab[++i])
		free(tab[i]);
	free(tab);
}

int		main(int argc, char **argv)
{
	char		*tmp;
	t_struct	*block;
	char		*read;
	char		**finish;

	if (argc != 2)
		ft_error_arguments();
	read = ft_read_check(argv[1]);
	block = ft_block(read);
	block = ft_default_xy(block);
	finish = ft_result(block, ft_max_size(block));
	free(read);
	tmp = (void*)finish;
	while (*finish)
		ft_putendl(*finish++);
	ft_free_tab((char**)tmp);
	return (0);
}
