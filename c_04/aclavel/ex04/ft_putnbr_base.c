/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 14:53:35 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/11 17:03:47 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_isspace(char c)
{
	int		i;
	char	*isspace;

	isspace = "\n\t\v\f\r ";
	i = 0;
	while (isspace[i] != '\0')
	{
		if (isspace[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_valid_base(char *base)
{
	int		i;
	int		j;

	if (*base == '\0' || ft_strlen(base) == 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (ft_isspace(base[i]) || base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = 1;
		while (base[i] != base[i + j] && j < ft_strlen(base) - 1)
			j++;
		if (base[i] == base[i + j])
			return (0);
		i++;
	}
	return (1);
}

void	ft_tobase(long nb, char *base, int size)
{
	int u;

	if (nb > size - 1)
	{
		ft_tobase(nb / size, base, size);
		u = nb % size;
		write(1, &base[u], 1);
	}
	else
		write(1, &base[nb], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	long	nb;
	char	c;

	if (!ft_valid_base(base))
		return ;
	nb = nbr;
	if (nb < 0)
	{
		nb = -nb;
		c = '-';
		write(1, &c, 1);
	}
	ft_tobase(nb, base, ft_strlen(base));
}
