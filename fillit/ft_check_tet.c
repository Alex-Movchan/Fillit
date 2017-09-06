/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 18:07:35 by amovchan          #+#    #+#             */
/*   Updated: 2016/12/15 18:16:23 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_tet(char *str, int i)
{
	int	neighbor;
	int	counthash;

	while (str[++i])
	{
		neighbor = 0;
		counthash = 0;
		while (str[i] && ((i + 1) % 21))
		{
			str[i] == '#' ? counthash++ : 1;
			if (str[i] == '#')
				neighbor += ft_check_nb(str, i, 0);
			i++;
		}
		if (counthash != 4)
			ft_error();
		if (neighbor < 6)
			ft_error();
		if (!str[i])
			break ;
	}
	return (1);
}
