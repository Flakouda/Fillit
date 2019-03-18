/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 01:25:30 by florientako       #+#    #+#             */
/*   Updated: 2018/11/30 13:14:03 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size1;
	size_t	size2;

	size1 = 0;
	size2 = 0;
	s1 ? size1 = ft_strlen(s1) : 0;
	s2 ? size2 = ft_strlen(s2) : 0;
	if (!(str = malloc(size1 + size2 + 1)))
		return (NULL);
	s1 ? ft_strcpy(str, s1) : 0;
	s2 ? ft_strcpy(&str[size1], s2) : 0;
	return (str);
}
