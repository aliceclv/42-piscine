/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaicic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 18:19:17 by ssaicic           #+#    #+#             */
/*   Updated: 2019/07/14 18:19:18 by ssaicic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush01.h"

int		*ft_atotab(char *str, int len)
{
	int		i;
	int		j;
	int		*tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(int) * len);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tab[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (tab);
}

void	set_views(int **tab, int *tabint, int sq_size, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = -1;
		tab[i] = malloc(sizeof(int) * size);
		while (++j < size)
		{
			if (i == 0 && j == 0)
				tab[i][j] = 0;
			else if (i == 0 && j > 0 && j < size - 1)
				tab[i][j] = tabint[j - 1];
			else if (i == (size - 1) && j > 0 && j < size - 1)
				tab[i][j] = tabint[sq_size + j - 1];
			else if (j == 0 && i > 0 && i < size - 1)
				tab[i][j] = tabint[sq_size * 2 + i - 1];
			else if (j == (size - 1) && i > 0 && i < size - 1)
				tab[i][j] = tabint[sq_size * 3 + i - 1];
			else
				tab[i][j] = 0;
		}
		i++;
	}
}
