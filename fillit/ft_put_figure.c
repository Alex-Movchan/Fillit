/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 17:25:21 by amovchan          #+#    #+#             */
/*   Updated: 2016/12/16 18:17:49 by mivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_put_figure(char **map, int count, t_sh *w, int *tab)
{
	int	idx;

	idx = -1;
	while (++idx < 3)
	{
		if ((tab[0] + w[count].y[idx] >= tab[2])
			|| (tab[0] + w[count].y[idx] < 0)
			|| (tab[1] + w[count].x[idx] >= tab[2])
			|| (tab[1] + w[count].x[idx] < 0))
			return (0);
		idx++;
	}
	idx = -1;
	if (map[tab[0]][tab[1]] == '.')
	{
		while (++idx < 3)
		{
			if (map[tab[0] + w[count].y[idx]][tab[1]
												+ w[count].x[idx]] != '.')
				return (0);
		}
		return (1);
	}
	else
		return (0);
}
