/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_diff.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:51:11 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/13 17:59:32 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		test_diff(int **tab, int x, int y, int n)
{
	// Objectif: retourner faux (0) ou vrai (1) pour savoir si tout les elements de la ligne
	// et de la colonne sont differents
	int		i;

	i = 1;
	while (i <= n)
	{
		if (tab[i][y] == tab[x][y] && i != x)
			return (0);
		else if (tab[x][i] == tab[x][y] && i != y)
			return (0);
		i++;
	}
	return (1);
}

#include <stdlib.h>

int		main(int ac, char **av)
{
	int		test[6][6] = {{0, 4, 3, 2, 1, 0},
						  {4, 4, 2, 3, 4, 1},
						  {3, 2, 3, 4, 1, 2},
						  {2, 3, 4, 1, 2, 2},
						  {1, 4, 1, 2, 3, 2},
						  {0, 1, 2, 2, 2, 0}};
	int		**tab = malloc(sizeof(int*) * 6);
	int i = 0;
	int j;
	while (i < 6)
	{
		tab[i] = malloc(sizeof(int) * 6);
		j = 0;
		while (j < 6)
		{
			tab[i][j] = test[i][j];
			j++;
		}
		i++;
	}
	
	printf("%d\n", test_diff(tab, atoi(av[1]), atoi(av[2]), 4));

}
