/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:33:44 by amovchan          #+#    #+#             */
/*   Updated: 2016/12/16 18:18:10 by mivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_fillit(char **map, t_sh *w, int *res)
{
	int tab[3];

	tab[2] = res[0];
	if (res[1] == res[2])
		return (1);
	tab[0] = -1;
	while (++tab[0] < res[0])
	{
		tab[1] = -1;
		while (++tab[1] < res[0])
		{
			if (ft_put_figure(map, res[1], w, tab))
			{
				ft_print_figure(map, res[1], w, tab);
				res[1]++;
				if (ft_fillit(map, w, res))
					return (1);
				else
					ft_clean_figure(map, --res[1], w, tab);
			}
		}
	}
	return (0);
}
