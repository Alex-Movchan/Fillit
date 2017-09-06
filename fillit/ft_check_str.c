/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 18:17:08 by amovchan          #+#    #+#             */
/*   Updated: 2016/12/17 12:44:09 by mivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_str(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if (!((i + 1) % 21) || !(((i % 21) + 1) % 5))
		{
			if (str[i] != '\n')
				ft_error();
		}
		else
		{
			if (!(str[i] == '.' || str[i] == '#'))
				ft_error();
		}
		i++;
	}
	if (!ft_check_tet(str, -1))
		ft_error();
	return (1);
}
