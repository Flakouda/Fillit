/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 17:19:38 by florientako       #+#    #+#             */
/*   Updated: 2019/03/18 10:31:33 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		ft_error_arguments(void)
{
	ft_putstr("Usage: ./fillit target_file\n");
	exit(0);
}

int		ft_error(void)
{
	ft_putstr("error\n");
	exit(1);
}
