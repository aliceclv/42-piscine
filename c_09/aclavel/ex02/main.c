/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:11:51 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/22 12:07:55 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int		main(int ac, char **av)
{
	int		i;
	char	**tab;

	(void)ac;
	// (void)av;
	tab = ft_split(av[1], av[2]);

	i = 0;
	while (tab && tab[i] != NULL)
	{
		printf("[%s]", tab[i]);
		i++;
	}
	// printf("[%s][%s][%s][%s]\n", av[0], av[1], av[2], av[3]);
}
