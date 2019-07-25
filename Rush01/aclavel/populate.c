/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaicic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 23:21:46 by ssaicic           #+#    #+#             */
/*   Updated: 2019/07/14 23:21:54 by ssaicic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"

int		populate(int **tab, int y, int x)
{
	int		i;

	if (y > 4)
		return (1);
	i = 1;
	while (i <= 4)
	{
		tab[y][x] = i;
		if (test_diff_line(tab, y, x) && test_leftright(tab, y, x) &&
test_diff_column(tab, y, x) && test_updown(tab, y, x) &&
(x < 4 || test_rightleft(tab, y, x)) && (y < 4 || test_downup(tab, y, x)))
		{
			if (populate(tab, (x == 4) ? y + 1 : y, (x == 4) ? 1 : x + 1))
				return (1);
		}
		i++;
	}
	tab[y][x] = 0;
	return (0);
}
