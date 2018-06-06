/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 01:34:23 by flakouda          #+#    #+#             */
/*   Updated: 2018/01/04 17:21:17 by thescriv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char				**ft_result(t_struct *block, int max)
{
	char	**tab;

	tab = NULL;
	while (!tab)
	{
		tab = ft_fill_empty(tab, max);
		tab = ft_solve(tab, block, max);
		max++;
	}
	return (tab);
}

char				**ft_solve(char **tab, t_struct *block, int max)
{
	int		x;
	int		y;
	char	**tmp;

	if (!block->next)
		return (tab);
	tmp = NULL;
	y = 0;
	while (y < max)
	{
		x = 0;
		while (x < max)
		{
			block = ft_update_xy(block, x, y);
			if (ft_check(tab, block, max))
				tmp = ft_solve(ft_saved(tab, block, max), block->next, max);
			if (tmp)
				return (tmp);
			tab = ft_reset(tab, block, max);
			++x;
		}
		++y;
	}
	return (NULL);
}

int					ft_check(char **tab, t_struct *block, int max)
{
	int		x;
	int		y;
	int		i;

	y = 0;
	i = 0;
	while (y < max)
	{
		x = 0;
		while (x < max)
		{
			if (block->x[i] == x && block->y[i] == y && tab[y][x] != '.')
				return (0);
			else if (block->x[i] == x && block->y[i] == y)
				i++;
			x++;
		}
		y++;
	}
	if (i < 4)
		return (0);
	return (1);
}

char				**ft_saved(char **tab, t_struct *block, int max)
{
	int		x;
	int		y;
	int		i;

	y = 0;
	i = 0;
	while (y < max)
	{
		x = 0;
		while (x < max)
		{
			if (block->x[i] == x && block->y[i] == y)
			{
				tab[y][x] = block->c;
				i++;
			}
			x++;
		}
		tab[y][x] = '\0';
		y++;
	}
	tab[y] = NULL;
	return (tab);
}

char				**ft_reset(char **tab, t_struct *block, int max)
{
	int		x;
	int		y;

	y = 0;
	while (y < max)
	{
		x = 0;
		while (x < max)
		{
			if (tab[y][x] == block->c)
				tab[y][x] = '.';
			x++;
		}
		y++;
	}
	return (tab);
}
