/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 19:15:13 by amovchan          #+#    #+#             */
/*   Updated: 2016/12/16 18:24:58 by mivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_sh	*ft_struct_figure(int count, int **array)
{
	int		index;
	t_sh	*w;
	int		i;

	i = 0;
	index = -1;
	w = (t_sh*)malloc(sizeof(t_sh) * (count + 1));
	while (++index < count)
	{
		w[index].c = 'A' + index;
		w[index].x[0] = array[i][0];
		w[index].x[1] = array[i][1];
		w[index].x[2] = array[i++][2];
		w[index].y[0] = array[i][0];
		w[index].y[1] = array[i][1];
		w[index].y[2] = array[i++][2];
	}
	return (w);
}
