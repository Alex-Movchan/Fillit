/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_figure.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 18:12:44 by amovchan          #+#    #+#             */
/*   Updated: 2016/12/14 19:58:45 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_print_figure(char **map, int count, t_sh *w, int *tab)
{
	int	idx;

	idx = 0;
	map[tab[0]][tab[1]] = w[count].c;
	while (idx < 3)
	{
		map[tab[0] + w[count].y[idx]][tab[1]
										+ w[count].x[idx]] = w[count].c;
		idx++;
	}
}
