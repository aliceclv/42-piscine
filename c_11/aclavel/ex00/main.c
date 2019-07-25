/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:04:17 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/23 11:10:08 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putnbr(int nb)
{
	printf("%d\n", nb);
}

int		main(void)
{
	int		tab[6] = {1, 2, 3, 4, 5, 6};
	void	(*f)(int);

	f = &ft_putnbr;
	ft_foreach(tab, 6, f);
}
