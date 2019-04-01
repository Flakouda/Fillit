/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fonctions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floakoud <floakoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 00:38:42 by flakouda          #+#    #+#             */
/*   Updated: 2019/04/01 15:02:48 by floakoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_struct			*ft_block(char *str)
{
	int			i;
	int			j;
	char		c;
	t_struct	*block;
	t_struct	*tmp;

	j = 0;
	c = 64;
	i = ft_map_check(str);
	ft_map_line_check(str);
	if (!(block = (t_struct *)malloc(sizeof(t_struct))))
		return (NULL);
	tmp = block;
	while (i-- > 0)
	{
		tmp->str = ft_strndup(&str[j], 20);
		ft_check_chaine(tmp->str);
		tmp->c = ++c;
		j += 21;
		if (!(tmp->next = (t_struct *)malloc(sizeof(t_struct))))
			return (NULL);
		tmp = tmp->next;
	}
	tmp->next = NULL;
	return (block);
}

int					ft_count_x(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		*str == 'x' ? i++ : 0;
		str++;
	}
	return (i);
}

t_struct			*ft_default_xy(t_struct *block)
{
	t_struct	*tmp;

	tmp = block;
	while (block->next)
	{
		block = ft_block_xy(block, ft_strsplit(block->str, '\n'));
		free(block->str);
		block = block->next;
	}
	return (tmp);
}

t_struct			*ft_block_xy(t_struct *block, char **tab)
{
	int		x;
	int		y;
	int		i;

	y = -1;
	i = 0;
	while (tab[++y])
	{
		x = -1;
		while (tab[y][++x])
		{
			if (tab[y][x] == '#')
			{
				block->x[i] = x;
				block->y[i] = y;
				i++;
			}
		}
	}
	ft_free_tab(tab);
	return (block);
}

t_struct			*ft_update_xy(t_struct *block, int x, int y)
{
	int		xmin;
	int		ymin;
	int		i;

	xmin = 200;
	ymin = 200;
	i = -1;
	while (++i != 4)
	{
		block->x[i] < xmin ? xmin = block->x[i] : 0;
		block->y[i] < ymin ? ymin = block->y[i] : 0;
	}
	i = -1;
	while (++i != 4)
	{
		block->x[i] = block->x[i] - xmin + x;
		block->y[i] = block->y[i] - ymin + y;
	}
	return (block);
}
