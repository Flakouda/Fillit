/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 21:39:09 by florientako       #+#    #+#             */
/*   Updated: 2018/11/30 13:14:48 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tab;

	if (!(tab = (char *)malloc(sizeof(*tab) * (size + 1))))
		return (NULL);
	if (!size)
		return (tab);
	ft_memset(tab, '\0', size + 1);
	return (tab);
}
