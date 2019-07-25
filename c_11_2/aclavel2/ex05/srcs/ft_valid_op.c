/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_op.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 19:47:41 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/23 20:51:22 by aclavel          ###   ########.fr       */
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

int		ft_valid_op(char *str)
{
	char	*ops;
	int		i;

	if (ft_strlen(str) != 1)
		return (0);
	ops = "+-/*%";
	i = 0;
	while (i < 5)
	{
		if (*str == ops[i])
			return (1);
		i++;
	}
	return (0);
}
