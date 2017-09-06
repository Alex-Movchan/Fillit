/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivanov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 21:11:50 by mivanov           #+#    #+#             */
/*   Updated: 2016/12/17 13:00:47 by mivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		**arr;
	int		**result;
	char	*s;
	t_sh	*a;

	if (argc != 2)
	{
		write(1, "usage: ./fillit source_file\n", 28);
		return (0);
	}
	if (!(s = ft_get_string(argv[1])))
		ft_error();
	if (!ft_check_str(s))
		ft_error();
	arr = (int**)malloc(ft_count_figure(s) * 4 * sizeof(*arr));
	result = (int**)malloc(ft_count_figure(s) * 4 * sizeof(result));
	arr = ft_get_absolute_xy(s);
	result = ft_get_relative_xy(arr, s);
	a = ft_struct_figure(ft_count_figure(s), result);
	ft_solve_fillit(a, ft_count_figure(s));
	return (0);
}
