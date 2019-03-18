/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 21:26:11 by florientako       #+#    #+#             */
/*   Updated: 2018/11/30 13:08:59 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	erreur_str(char *str, char *base)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i])
	{
		if ((str[i] == 43 || str[i] == 45) && i != 0)
			return (0);
		if (base[j] == '\0')
			return (0);
		if (base[j] == str[i] || ((str[i] == 43 || str[i] == 45) && i == 0))
		{
			j = -1;
			i++;
			if (str[i] == 43 || str[i] == 45)
				return (2);
		}
		j++;
	}
	if (str[0] == 45)
		return (2);
	return (1);
}

static int	erreur_base(char *base)
{
	int		i;
	int		j;

	j = 0;
	i = 1;
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

static int	ft_atoi_b(char *str, char *base, int i, int n)
{
	int		negatif;
	int		k;
	int		j;

	j = 0;
	k = 0;
	negatif = 0;
	while (base[k])
		k++;
	if (erreur_base(base) == 0 || erreur_str(str, base) == 0)
		return (0);
	erreur_str(str, base) == 2 ? negatif++ : negatif == 0;
	str[0] == '+' || str[0] == '-' ? ++i : 0;
	while (str[++i])
	{
		while (!(base[j] == str[i]) && base[j])
			j++;
		if (base[j] == '\0')
			return (n);
		n = n * k;
		n = n + j;
		j = 0;
	}
	return (negatif == 1 ? -n : n);
}

int			ft_atoi_base(char *str, char *base)
{
	return (ft_atoi_b(str, base, -1, 0));
}
