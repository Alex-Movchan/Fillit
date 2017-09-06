/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 14:29:07 by amovchan          #+#    #+#             */
/*   Updated: 2016/12/16 18:14:27 by mivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_solve_fillit(t_sh *w, int const_count)
{
	char	**map;
	int		res[3];

	res[0] = 2;
	res[1] = 0;
	res[2] = const_count;
	while (res[0] * res[0] < res[2] * 4)
		res[0]++;
	map = ft_fill_map(res[0]);
	while (!(ft_fillit(map, w, res)))
	{
		ft_free_map(map, res[0]);
		res[0]++;
		map = ft_fill_map(res[0]);
	}
	ft_print_map(map, res[0]);
}
