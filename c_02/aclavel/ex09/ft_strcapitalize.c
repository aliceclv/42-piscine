/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 12:14:28 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/08 12:14:31 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	f;
	int	is_low;
	int	is_up;

	i = 0;
	f = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		is_low = str[i] >= 'a' && str[i] <= 'z';
		is_up = str[i] >= 'A' && str[i] <= 'Z';
		if (f && is_low)
		{
			str[i] -= 32;
			f = 0;
		}
		else if (is_low || is_up || (str[i] >= '0' && str[i] <= '9'))
			f = 0;
		else
			f = 1;
		i++;
	}
	return (str);
}
