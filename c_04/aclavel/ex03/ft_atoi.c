/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:58:57 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/11 14:27:19 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

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

int		ft_atoi(char *str)
{
	int		i;
	int		c;
	int		nb;

	if (*str == '\0')
		return (0);
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	c = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		c += str[i] == '-' ? 1 : 0;
		i++;
	}
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (c % 2 == 0 && c != 1)
		return (nb);
	else
		return (-nb);
}
