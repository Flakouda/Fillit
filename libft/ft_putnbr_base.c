/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 18:04:34 by florientako       #+#    #+#             */
/*   Updated: 2018/11/30 13:11:40 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	erreur(char *base, int i, int j)
{
	if (base == 0 || base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[j])
	{
		while (base[i])
		{
			if (base[j] == base[i])
				return (0);
			i++;
		}
		j++;
		i = j + 1;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45)
			return (0);
		i++;
	}
	return (1);
}

static void	afficher(int nb, char *base)
{
	int		i;

	i = 0;
	while (base[i])
		i++;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar(base[2]);
			nb = -147483648;
		}
		nb = -nb;
	}
	if (nb >= i)
	{
		afficher(nb / i, base);
		afficher(nb % i, base);
	}
	else
		ft_putchar(base[nb]);
}

void		ft_putnbr_base(int nb, char *base)
{
	if (erreur(base, 1, 0) == 0)
		return ;
	afficher(nb, base);
}
