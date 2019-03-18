/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:22:45 by florientako       #+#    #+#             */
/*   Updated: 2018/11/30 13:14:24 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	int		j;

	j = -1;
	i = ft_strlen(dest);
	while (src[++j] && n--)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
