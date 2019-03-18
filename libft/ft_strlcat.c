/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:30:40 by florientako       #+#    #+#             */
/*   Updated: 2018/11/30 13:14:07 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int i;
	unsigned int dst_len;
	unsigned int src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = -1;
	if (!size)
		return (dst_len);
	while (src[++i] && (dst_len + i) < (size - 1))
		dst[dst_len + i] = src[i];
	dst[dst_len + i] = '\0';
	if (dst_len > size)
		return (src_len + size);
	return (dst_len + src_len);
}
