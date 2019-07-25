/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 09:57:16 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/16 11:41:24 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *str1, char *str2)
{
	int		i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0')
		i++;
	return (str1[i] - str2[i]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_args(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int ac, char **av)
{
	int		i;
	int		j;
	char	*cp;

	i = 1;
	while (i < ac)
	{
		j = i;
		while (ft_strcmp(av[j], av[j - 1]) < 0 && j > 1)
		{
			cp = av[j - 1];
			av[j - 1] = av[j];
			av[j] = cp;
			j--;
		}
		i++;
	}
	ft_print_args(ac, av);
	return (0);
}
