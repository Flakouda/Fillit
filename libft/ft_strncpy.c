/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:51:18 by florientako       #+#    #+#             */
/*   Updated: 2018/11/30 13:14:33 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (n--)
	{
		dest[j] = src[i];
		src[i] != '\0' ? i++ : 0;
		j++;
	}
	return (dest);
}
