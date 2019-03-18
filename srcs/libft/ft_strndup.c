/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 13:54:59 by florientako       #+#    #+#             */
/*   Updated: 2018/11/30 13:14:37 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	unsigned int	i;
	char			*cpy;

	if (!(cpy = (char*)malloc(sizeof(*cpy) * (n + 1))))
		return (NULL);
	i = -1;
	while (*s && ++i < n)
		cpy[i] = s[i];
	cpy[i] = '\0';
	return (cpy);
}
