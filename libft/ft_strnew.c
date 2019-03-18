/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floakoud <floakoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 21:39:09 by florientako       #+#    #+#             */
/*   Updated: 2019/03/18 16:27:46 by floakoud         ###   ########.fr       */
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
	ft_memset(tab, '.', size + 1);
	return (tab);
}
