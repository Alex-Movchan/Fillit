/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_figure.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 18:24:31 by amovchan          #+#    #+#             */
/*   Updated: 2016/12/17 11:58:50 by mivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_clean_figure(char **map, int count, t_sh *w, int *tab)
{
	int	idx;

	idx = 0;
	map[tab[0]][tab[1]] = '.';
	while (idx < 3)
	{
		map[tab[0] + w[count].y[idx]][tab[1]
										+ w[count].x[idx]] = '.';
		idx++;
	}
}
