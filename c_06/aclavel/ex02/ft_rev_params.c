/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 09:40:05 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/16 09:55:26 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int		j;

	while (--ac >= 1)
	{
		j = 0;
		while (av[ac][j] != '\0')
		{
			ft_putchar(av[ac][j]);
			j++;
		}
		ft_putchar('\n');
	}
}
