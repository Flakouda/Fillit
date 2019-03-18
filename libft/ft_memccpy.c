/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:43:14 by florientako       #+#    #+#             */
/*   Updated: 2018/11/30 13:10:44 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	x;

	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	x = (unsigned char)c;
	while (n--)
		if ((*a++ = *b++) == x)
			return (a);
	return (NULL);
}
