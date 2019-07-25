/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:53:37 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/10 14:01:49 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		f;
	char	*o;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		f = 1;
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] != to_find[j])
				f = 0;
			else if (j == 0 && str[i + j] == to_find[j])
				o = str + i;
			j++;
		}
		if (to_find[j] == '\0' && f)
			return (o);
		i++;
	}
	return (NULL);
}
