/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 18:56:29 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/12 12:06:30 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;
	int		j;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	i = 0;
	j = nb;
	while (++i < power)
		j = j * nb;
	return (j);
}
