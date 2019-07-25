/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:31:20 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/17 11:58:01 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int		main(int ac, char **av)
{
	int		*tab;
	int		**range;

	range = &tab;
	(void)ac;
	printf("%d\n", ft_ultimate_range(range, atoi(av[1]), atoi(av[2])));
}
