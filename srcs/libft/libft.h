/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 16:51:25 by florientako       #+#    #+#             */
/*   Updated: 2019/03/18 10:29:39 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct          s_list
{
        void                    *content;
        size_t                  content_size;
        struct s_list   *next;
}						t_list;

void	ft_bzero(void *s, size_t n);
char	**ft_strsplit(char const *s, char c);
char	*ft_strnew(size_t size);
char	*ft_strndup(const char *s, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
int		ft_strclen(char const *s, char c, int p);
void	ft_putstr(char const *s);
void	ft_putchar(char c);
int		ft_nbmot(char const *s, char c);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	ft_putendl(char const *s);

#endif