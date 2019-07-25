/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:04:53 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/24 11:19:51 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_sort_string_tab(char **tab);


int	oo(char *a, char *b)
{
	return (strcmp((const char*)a, (const char*)b));
}
int		main(int ac, char **av)
{
	int		i;

	(void)ac;
	ft_sort_string_tab(av);	
	i = 0;
	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}

}
