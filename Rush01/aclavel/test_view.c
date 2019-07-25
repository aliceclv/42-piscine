/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_view.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaicic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 18:25:59 by ssaicic           #+#    #+#             */
/*   Updated: 2019/07/13 19:19:47 by ssaicic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		test_leftright(int **tab, int y, int x)
{
	int		i;
	int		count;
	int		max;

	i = 1;
	count = 0;
	max = 0;
	while (i <= x)
	{
		if (tab[y][i] > max)
		{
			max = tab[y][i];
			count++;
		}
		i++;
	}
	if (x == 4)
		return (count == tab[y][0] ? 1 : 0);
	return (count <= tab[y][0] ? 1 : 0);
}

int		test_updown(int **tab, int y, int x)
{
	int		i;
	int		count;
	int		max;

	i = 1;
	count = 0;
	max = 0;
	while (i <= y)
	{
		if (tab[i][x] > max)
		{
			max = tab[i][x];
			count++;
		}
		i++;
	}
	if (y == 4)
		return (count == tab[0][x] ? 1 : 0);
	return (count <= tab[0][x] ? 1 : 0);
}

int		test_rightleft(int **tab, int y, int x)
{
	int		i;
	int		count;
	int		max;

	(void)x;
	i = 4;
	count = 0;
	max = 0;
	while (i >= 1)
	{
		if (tab[y][i] > max)
		{
			max = tab[y][i];
			count++;
		}
		i--;
	}
	return (count == tab[y][5] ? 1 : 0);
}

int		test_downup(int **tab, int y, int x)
{
	int		i;
	int		count;
	int		max;

	(void)y;
	i = 4;
	count = 0;
	max = 0;
	while (i >= 1)
	{
		if (tab[i][x] > max)
		{
			max = tab[i][x];
			count++;
		}
		i--;
	}
	return (count == tab[5][x] ? 1 : 0);
}
