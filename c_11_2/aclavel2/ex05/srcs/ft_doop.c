/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:13:05 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/23 20:53:16 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

void	ft_doop(char **av)
{
	char	*ops;
	int		i;
	int		j;
	int		(*tab[5])(int, int);

	tab[0] = &ft_sum;
	tab[1] = &ft_sub;
	tab[2] = &ft_div;
	tab[3] = &ft_mult;
	tab[4] = &ft_mod;
	ops = "+-/*%";
	i = 0;
	while (ops[i])
	{
		if (ops[i] == *(av[1]))
		{
			j = (tab[i])(ft_atoi(av[0]), ft_atoi(av[2]));
			ft_putnbr(j);
			return ;
		}
		i++;
	}
}
