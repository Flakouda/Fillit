/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:48:05 by florientako       #+#    #+#             */
/*   Updated: 2018/11/30 13:08:50 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int		i;
	int		nb;
	int		neg;

	nb = 0;
	i = 0;
	neg = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		nptr[i++] == '-' ? neg++ : 0;
	while (nptr[i] && nptr[i] <= '9' && nptr[i] >= '0')
	{
		nb += (nptr[i] - 48);
		nptr[i + 1] && nptr[i + 1] <= '9' && nptr[i + 1] >= '0' ? nb *= 10 : 0;
		i++;
	}
	return (neg > 0 ? -nb : nb);
}
