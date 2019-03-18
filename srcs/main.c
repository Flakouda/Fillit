/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 17:20:20 by florientako       #+#    #+#             */
/*   Updated: 2019/03/18 10:52:16 by florientako      ###   ########.fr       */
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

int					ft_count_x(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		if (*str == 'x')
			i++;
		str++;
	}
	return (i);
}

int			ft_max_size(t_struct *block)
{
	int		i;
	int		max;

	i = 0;
	max = 2;
	while (block->next && i++)
		block = block->next;
	while (max * max < i * 4)
		max++;
	return (max);
}