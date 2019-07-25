/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:42:19 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/23 11:56:04 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_count_if(char **tab, int length,  int (*f)(char*)); 

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

	printf("%d\n", ft_count_if(av, 4, &ft_is_low_alpha));
	return (0);
}
