/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 10:28:13 by florientako       #+#    #+#             */
/*   Updated: 2019/03/18 10:28:50 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "../srcs/libft/libft.h"


typedef struct		s_struct
{
	char			c;
	char			*str;
	int				x[4];
	int				y[4];
	struct s_struct	*next;
}					t_struct;

void				ft_map_line_check(char *read);
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
char				**ft_fill_empty(char **tab, int max);
int					ft_max_size(t_struct *block);

#endif
