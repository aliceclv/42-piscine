/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 13:38:25 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/17 19:48:53 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_valid_base(char *base);
int		ft_in_base(char c, char *base);
int		ft_strlen(char *str);

void	ft_tobase(int n, int i, char *base_to, char **dest)
{
	int		u;
	int		bsize;

	bsize = ft_strlen(base_to);
	if (n >= bsize)
	{
		ft_tobase(n / bsize, i - 1, base_to, dest);
		u = n % bsize;
		(*dest)[i] = base_to[u];
	}
	else
		(*dest)[i] = base_to[n];
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		nb;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		sign = *str == '-' ? -sign : sign;
		str++;
	}
	i = -1;
	nb = 0;
	while (str[++i] != '\0' && ft_in_base(str[i], base))
		nb = nb * ft_strlen(base) + str[i] - base[0];
	return (nb * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	int		char_count;
	int		bsize;
	int		j;
	char	*str;

	if (!(ft_valid_base(base_from) && ft_valid_base(base_to)))
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	bsize = ft_strlen(base_to);
	char_count = (n < 0 ? 2 : 1);
	j = n;
	while (j != 0)
	{
		j /= bsize;
		char_count++;
	}
	str = malloc(sizeof(char) * char_count);
	if (n < 0)
		str[0] = '-';
	ft_tobase(n < 0 ? -n : n, char_count - 2, base_to, &str);
	str[char_count - 1] = '\0';
	return (str);
}
