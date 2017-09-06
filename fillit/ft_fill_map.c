/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 19:57:15 by amovchan          #+#    #+#             */
/*   Updated: 2016/12/14 19:36:42 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_fill_map(int n)
{
	char	**map;
	int		i;
	int		j;

	i = 0;
	if (!(map = (char**)malloc(sizeof(char*) * n)))
		return (NULL);
	while (i < n)
	{
		j = 0;
		if (!(map[i] = (char*)malloc(sizeof(char) * (n + 1))))
			return (NULL);
		while (j < n)
			map[i][j++] = '.';
		map[i][j] = '\0';
		i++;
	}
	return (map);
}
