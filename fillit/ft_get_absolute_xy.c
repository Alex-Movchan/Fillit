/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_absolute_xy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivanov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 19:20:35 by mivanov           #+#    #+#             */
/*   Updated: 2016/12/16 14:36:41 by mivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**ft_get_absolute_xy(char *s)
{
	int		i;
	int		count_figures;
	int		**res;

	i = 0;
	count_figures = ft_count_figure(s) * 4;
	res = (int**)malloc(count_figures * sizeof(*res));
	while (count_figures > 0)
		res[--count_figures] = (int*)malloc(2 * sizeof(int));
	while (s[i])
	{
		if (s[i] == '#')
		{
			res[count_figures] = ft_get_coordinates(i);
			count_figures++;
		}
		i++;
	}
	return (res);
}
