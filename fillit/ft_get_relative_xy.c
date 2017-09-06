/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_relative_xy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivanov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 19:24:55 by mivanov           #+#    #+#             */
/*   Updated: 2016/12/16 14:37:07 by mivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**ft_get_relative_xy(int **arr, char *s)
{
	int		**result;
	int		count_figures;
	int		temp;
	int		i;

	i = 0;
	count_figures = ft_count_figure(s) * 2;
	result = (int**)malloc(count_figures * sizeof(result));
	temp = count_figures;
	while (count_figures > 0)
		result[--count_figures] = (int*)malloc(3 * sizeof(int));
	while (count_figures < temp)
	{
		result[count_figures][0] = arr[i + 1][1] - arr[i][1];
		result[count_figures][1] = arr[i + 2][1] - arr[i][1];
		result[count_figures++][2] = arr[i + 3][1] - arr[i][1];
		result[count_figures][0] = arr[i + 1][0] - arr[i][0];
		result[count_figures][1] = arr[i + 2][0] - arr[i][0];
		result[count_figures++][2] = arr[i + 3][0] - arr[i][0];
		i += 4;
	}
	return (result);
}
