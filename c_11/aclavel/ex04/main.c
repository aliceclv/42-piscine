/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:42:19 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/23 15:10:41 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int)); 

int		ft_cmp(int a, int b)
{
	return (a - b);
}

int		main(int ac, char **av)
{
	int		tab[4] = {4,3 ,2 , 5};
	(void)ac;
	(void)av;

	printf("%d\n", ft_is_sort(tab, 4, &ft_cmp));
	return (0);
}
