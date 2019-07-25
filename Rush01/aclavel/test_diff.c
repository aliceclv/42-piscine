/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_diff.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:51:11 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/13 18:22:18 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		test_diff_line(int **tab, int y, int x)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if (tab[y][i] == tab[y][x] && i != x)
			return (0);
		i++;
	}
	return (1);
}

int		test_diff_column(int **tab, int y, int x)
{
	int		i;

	i = 1;
	while (i <= y)
	{
		if (tab[i][x] == tab[y][x] && i != y)
			return (0);
		i++;
	}
	return (1);
}
