/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:00:07 by florientako       #+#    #+#             */
/*   Updated: 2018/11/30 13:11:07 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!n || dest == src)
		return (dest);
	if (dest <= src)
		ft_memcpy(dest, src, n);
	else
		while ((int)--n >= 0)
			*((char *)dest + n) = *((char *)src + n);
	return (dest);
}
