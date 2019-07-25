/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 15:21:47 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/24 15:27:07 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		ft_cmp(int i, int j)
{
	return (i - j);
}


int		main(void)
{
	int		tab[] = {5, 4, 2, 1, 1};
	printf("%d\n", ft_is_sort(tab, 5, &ft_cmp));
}
