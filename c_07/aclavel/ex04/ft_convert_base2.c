/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 13:39:21 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/17 19:42:36 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_valid_base(char *base)
{
	int		i;
	int		j;
	int		size;

	size = ft_strlen(base);
	if (*base == '\0' || size == 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ' ||
base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = -1;
	while (base[++i] != '\0')
	{
		j = i + 1;
		while (base[i] != base[j] && j < size - 1)
			j++;
		if (base[i] == base[j])
			return (0);
	}
	return (1);
}

int		ft_in_base(char c, char *base)
{
	int		i;

	i = -1;
	while (base[++i] != '\0')
	{
		if (c == base[i])
			return (1);
	}
	return (0);
}
