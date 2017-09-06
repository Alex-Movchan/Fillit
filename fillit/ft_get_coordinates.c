/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_coordinates.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 18:39:38 by amovchan          #+#    #+#             */
/*   Updated: 2016/12/16 14:33:28 by mivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_get_coordinates(int i)
{
	int	j;
	int	*tmp;

	tmp = (int*)malloc(2 * sizeof(int));
	j = i % 21;
	tmp[0] = j / 5;
	tmp[1] = j % 5;
	return (tmp);
}
