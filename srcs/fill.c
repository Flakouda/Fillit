/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 17:19:34 by florientako       #+#    #+#             */
/*   Updated: 2019/03/18 10:47:18 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char		**ft_fill_empty(char **tab, int max)
{
	int y;

	y = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (max + 1))))
		return (NULL);
	while (y < max)
	{
		tab[y] = ft_strnew(max);
		y++;
	}
	tab[y] = NULL;
	return (tab);
}
