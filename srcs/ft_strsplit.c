/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 02:46:21 by flakouda          #+#    #+#             */
/*   Updated: 2018/01/02 16:11:37 by thescriv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static	int		ft_cutline(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] == c && str[i] != '\0')
		i++;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

static	char	*ft_strclear(char *str, char c)
{
	char *str2;

	if (*str == '\0')
		return (str);
	while (*str == c && *str != '\0')
		str++;
	str2 = ft_strdup(str);
	return (str2);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tabstr;
	size_t	i;
	size_t	y;

	y = 0;
	if (s == NULL || c == 0)
		return (NULL);
	if (!(tabstr = (char **)malloc(sizeof(char*) * (ft_strlen(s) + 1))))
		return (NULL);
	if (!s || !c)
		ft_bzero(*tabstr, ft_cutline(s, c));
	tabstr[ft_strlen(s)] = NULL;
	while (*s != '\0')
	{
		i = ft_cutline(s, c);
		tabstr[y] = ft_strndup(s, i);
		tabstr[y] = ft_strclear(tabstr[y], c);
		if (tabstr[y][0] == '\0')
			tabstr[y++] = 0;
		s += i;
		y++;
	}
	return (tabstr);
}
