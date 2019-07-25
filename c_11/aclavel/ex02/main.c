/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:42:19 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/23 11:47:55 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_any(char **tab, int (*f)(char*)); 

int		ft_is_low_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}


int		main(int ac, char **av)
{
	(void)ac;
	av++;

	printf("%d\n", ft_any(av, &ft_is_low_alpha));
	return (0);
}
