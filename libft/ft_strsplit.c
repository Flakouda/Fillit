/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:53:41 by florientako       #+#    #+#             */
/*   Updated: 2018/11/30 13:15:03 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	j = 0;
	i = -1;
	if (!s || !(tab = (char**)malloc(sizeof(*tab) * ft_nbmot(s, c) + 1)))
		return (NULL);
	while (s[++i])
	{
		i == 0 && s[0] != c ? j = 1 : 0;
		if ((s[i] == c && s[i + 1] != c) && (s[i + 1]))
			tab[j++] = ft_strsub(s, i + 1, ft_strclen(s, c, i + 1));
	}
	s[0] != c ? tab[0] = ft_strsub(s, 0, ft_strclen(s, c, 0)) : 0;
	tab[j] = 0;
	return (tab);
}
