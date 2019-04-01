/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floakoud <floakoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 00:26:54 by flakouda          #+#    #+#             */
/*   Updated: 2019/04/01 17:12:48 by floakoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"
# include <stdio.h>

typedef struct		s_struct
{
	char			c;
	char			*str;
	int				x[4];
	int				y[4];
	struct s_struct	*next;
}					t_struct;

void				ft_check_map(int dieses, int line, int dotes);
t_struct			*ft_default_xy(t_struct *block);
int					main(int argc, char **argv);
char				*ft_read_check(char *argv);
int					ft_map_check(char *read);
void				ft_check_chaine(char *str);
char				*ft_check_dieses(int i, char *str);
t_struct			*ft_block(char *str);
int					ft_count_x(char *str);
t_struct			*ft_block_xy(t_struct *block, char **tab);
t_struct			*ft_update_xy(t_struct *block, int x, int y);
char				**ft_result(t_struct *block, int max);
char				**ft_solve(char **tab, t_struct *block, int max);
int					ft_check(char **tab, t_struct *block, int max);
char				**ft_saved(char **tab, t_struct *block, int max);
char				**ft_reset(char **tab, t_struct *block, int max);
int					ft_error_arguments(void);
int					ft_error(void);
void				ft_free_tab(char **tab);
char				**ft_fill_empty(char **tab, int max);
int					ft_max_size(t_struct *block);

#endif
