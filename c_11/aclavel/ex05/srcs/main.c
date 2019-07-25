/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 16:07:54 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/23 20:51:03 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_err_op(char op)
{
	if (op == '/')
		ft_putstr("Stop : division by zero\n");
	else if (op == '%')
		ft_putstr("Stop : modulo by zero\n");
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (!ft_valid_op(av[2]))
	{
		write(1, "0\n", 2);
		return (0);
	}
	if ((*(av[2]) == '/' || *(av[2]) == '%') && ft_atoi(av[3]) == 0)
	{
		ft_err_op(*(av[2]));
		ft_putstr("\n");
		return (0);
	}
	ft_doop(++av);
	ft_putstr("\n");
	return (0);
}
