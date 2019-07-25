/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funct_lib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchemoun <jchemoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 12:07:05 by jchemoun          #+#    #+#             */
/*   Updated: 2019/07/21 19:23:58 by jchemoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_rush.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_atoi_ns(char *nbr)
{
	int i;
	int re;

	i = 0;
	re = 0;
	while (nbr[i] != 32 && nbr[i] != 58 && nbr[i] != '\0')
	{
		if (!(nbr[i] > 47 && nbr[i] < 58))
			return (0);
		re = re * 10 + (nbr[i] - 48);
		i++;
	}
	return (re);
}

char	*ft_ardup(char *str)
{
	int		i;
	int		len;
	int		mem;
	char	*re;

	i = 0;
	len = ft_strlen(str);
	re = malloc(sizeof(char) * (len + 1));
	mem = 0;
	while (i < len)
	{
		if (str[i] == ' ' && !mem)
		{
			re[i] = str[i];
			mem = 1;
		}
		else if (str[i] > 32 && str[i] < 127)
		{
			re[i] = str[i];
			mem = 0;
		}
		i++;
	}
	re[i] = '\0';
	return (re);
}
