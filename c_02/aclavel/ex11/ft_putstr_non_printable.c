/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 13:57:28 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/08 19:45:40 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dtohexa(char c)
{
	int f;

	f = c / 16;
	ft_putchar(f + '0');
	if (f == 0)
	{
		if (c < 10)
			ft_putchar(c + 0);
		else
			ft_putchar(c + 87);
	}
	else
		ft_dtohexa(c % 16);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_dtohexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
