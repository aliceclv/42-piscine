/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 13:57:28 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/09 17:46:42 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dtohexa(unsigned char c)
{
	int		u;
	char	*hexa;

	hexa = "0123456789abcdef";
	if (c / 16 > 0)
	{
		ft_putchar(hexa[c / 16]);
		u = c % 16;
		ft_putchar(hexa[u]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hexa[c]);
	}
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
