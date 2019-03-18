/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 00:56:10 by florientako       #+#    #+#             */
/*   Updated: 2018/11/30 13:16:39 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	if (!s || !(str = (char*)malloc(sizeof(*str) * len + 1)))
		return (NULL);
	i = -1;
	while (++i < (int)len && s[start])
		str[i] = s[start++];
	str[i] = 0;
	return (str);
}
