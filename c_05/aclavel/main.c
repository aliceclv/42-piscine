/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 17:19:36 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/16 09:06:28 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_find_next_prime(int nb);

int		main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_find_next_prime(atoi(av[1])));
}
