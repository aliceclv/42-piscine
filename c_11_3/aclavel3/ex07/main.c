/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:04:53 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/24 17:17:01 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));


int	oo(char *a, char *b)
{
	return (strcmp((const char*)a, (const char*)b));
}
int		main(int ac, char **av)
{
	int		i;

	(void)ac;
	ft_advanced_sort_string_tab(av + 1, &oo);	
	i = 0;
	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}

}
