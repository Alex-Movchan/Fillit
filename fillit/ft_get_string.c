/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivanov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 19:43:52 by mivanov           #+#    #+#             */
/*   Updated: 2016/12/17 12:25:32 by mivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_get_string(char *s)
{
	int		fd;
	int		i;
	char	ch;
	char	*str;

	i = 0;
	fd = open(s, O_RDONLY);
	str = (char*)malloc(546);
	if (fd < 0)
		ft_error();
	while (read(fd, &ch, 1) > 0)
	{
		if (ch == '.' || ch == '\n' || ch == '#')
			str[i++] = ch;
		else
			ft_error();
	}
	close(fd);
	if (i > 546 || (i + 1) % 21 != 0)
		ft_error();
	return (str);
}
