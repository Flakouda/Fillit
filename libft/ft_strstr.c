/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:06:40 by florientako       #+#    #+#             */
/*   Updated: 2018/11/30 13:17:59 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *stack, const char *needle)
{
	int		i;
	int		j;

	i = -1;
	if (needle[0] == 0)
		return ((char *)stack);
	while (stack[++i])
	{
		j = 0;
		while (stack[i++] == needle[j++])
			if (needle[j] == '\0')
				return ((char *)stack + (i - j));
		i -= j;
	}
	return (NULL);
}
