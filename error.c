/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floakoud <floakoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 23:55:48 by flakouda          #+#    #+#             */
/*   Updated: 2019/04/01 17:11:01 by floakoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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
