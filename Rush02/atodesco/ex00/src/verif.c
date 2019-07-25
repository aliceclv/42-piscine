/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchemoun <jchemoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 15:33:28 by atodesco          #+#    #+#             */
/*   Updated: 2019/07/21 20:51:17 by jchemoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_rush.h>
#include <stdio.h>

int		ft_checkswap(int size, t_dict *dt)
{
	int		i;
	int		j;
	t_dict	*tmp;

	i = -1;
	if (!(tmp = malloc(sizeof(t_dict) * 2)))
		return (0);
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			if (dt[i].cle == dt[j].cle)
				return (0);
			if (dt[i].cle > dt[j].cle)
			{
				*tmp = dt[i];
				dt[i] = dt[j];
				dt[j] = *tmp;
			}
		}
	}
	free(tmp);
	return (1);
}

int		ft_check_nbr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 47 && str[i] < 58))
			return (0);
		i++;
	}
	return (1);
}
