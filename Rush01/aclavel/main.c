/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaicic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 18:18:13 by ssaicic           #+#    #+#             */
/*   Updated: 2019/07/14 18:18:15 by ssaicic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush01.h"

void	print_tab(int **tab)
{
	int		i;
	int		j;
	int		c;
	int		s;

	i = 1;
	c = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			s = tab[i][j] + '0';
			write(1, &s, 1);
			if (c % 4 == 0)
				write(1, "\n", 1);
			j++;
			c++;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	int		i;
	int		*tabint;
	int		**tab;

	if (ac != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	tabint = ft_atotab(av[1], 16);
	tab = malloc(sizeof(int*) * 6);
	set_views(tab, tabint, 4, 6);
	if (populate(tab, 1, 1))
		print_tab(tab);
	else
		write(1, "Error\n", 6);
	return (0);
}
