/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 14:25:05 by amovchan          #+#    #+#             */
/*   Updated: 2016/12/16 18:24:24 by mivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct	s_sh
{
	char		c;
	int			x[3];
	int			y[3];
}				t_sh;

void			ft_solve_fillit(t_sh *a, int const_count);
void			ft_free_map(char **map, int size);
int				ft_check_str(char *str);
int				ft_check_tet(char *str, int i);
void			ft_clean_figure(char **map, int count, t_sh *new, int *tab);
int				ft_check_nb(char *str, int i, int neighbor);
int				ft_put_figure(char **map, int count, t_sh *new, int *tab);
char			**ft_fill_map(int n);
int				ft_strlen(char *str);
int				ft_count_figure(char *s);
void			ft_error(void);
int				**ft_get_absolute_xy(char *s);
int				**ft_get_relative_xy(int **arr, char *s);
char			*ft_get_string(char *s);
int				*ft_get_coordinates(int i);
void			ft_print_figure(char **map, int count, t_sh *new, int *tab);
void			ft_print_map(char **map, int size);
int				ft_fillit(char **map, t_sh *new, int *res);
t_sh			*ft_struct_figure(int count, int **array);

#endif
