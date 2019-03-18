/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floakoud <floakoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 16:36:15 by floakoud          #+#    #+#             */
/*   Updated: 2019/03/06 16:37:01 by floakoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoinfree(char *tab, char *tmp)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	tab ? i = ft_strlen(tab) : 0;
	tmp ? j = ft_strlen(tmp) : 0;
	str = (char *)malloc(sizeof(char) * (i + j + 1));
	ft_memcpy(str, tab, i);
	ft_memcpy(str + i, tmp, j);
	str[i + j] = '\0';
	free(tab);
	tab = NULL;
	return (str);
}
