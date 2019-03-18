/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:39:38 by florientako       #+#    #+#             */
/*   Updated: 2018/11/30 13:14:52 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	int		l;

	i = -1;
	if (little[0] == 0)
		return ((char *)big);
	while (big[++i] && len)
	{
		l = len;
		j = 0;
		while (big[i++] == little[j++] && l--)
			if (little[j] == '\0')
				return ((char *)big + (i - j));
		i -= j;
		len--;
	}
	return (NULL);
}
