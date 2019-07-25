/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:29:44 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/23 11:34:14 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int));

int		ft_plusone(int	i)
{
	return (i + 1);
}

int		main(void)
{
	int		i;
	int		tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int		*arr;
	
	arr = ft_map(tab, 10, &ft_plusone);	
	i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
