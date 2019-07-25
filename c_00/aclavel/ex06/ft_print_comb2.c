/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 09:11:10 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/04 11:16:58 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_int(int integer)
{
	int unit;
	int decimal;

	if (integer < 10)
	{
		ft_putchar('0');
		ft_putchar(integer + 48);
	}
	else
	{
		decimal = integer / 10;
		unit = integer % 10;
		ft_putchar(decimal + 48);
		ft_putchar(unit + 48);
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			print_int(i);
			ft_putchar(' ');
			print_int(j);
			if (i < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
