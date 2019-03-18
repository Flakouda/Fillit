/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floakoud <floakoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 01:35:55 by flakouda          #+#    #+#             */
/*   Updated: 2019/03/18 18:06:28 by floakoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char		*ft_strnew_line(size_t size)
{
	char *str;

	if ((str = (char *)malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	ft_memset(str, '.', size + 1);
	return (str);
}

char		**ft_fill_empty(char **tab, int max)
{
	int y;

	y = -1;
	if (!(tab = (char **)malloc(sizeof(char *) * (max + 1))))
		return (NULL);
	while (++y < max)
		tab[y] = ft_strnew_line(max);
	tab[y] = NULL;
	return (tab);
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
