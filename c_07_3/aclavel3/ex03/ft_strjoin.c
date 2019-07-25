/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:09:33 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/25 10:00:57 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_string_len(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = ft_string_len(dest);
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

int		ft_total_len(int size, char **strs, char *sep)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
	{
		if (strs[i] == NULL)
			return (-1);
		len += ft_string_len(strs[i]);
		i++;
	}
	if (size)
		len += ft_string_len(sep) * (size - 1);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		ln;
	int		i;

	if (sep == NULL || strs == NULL || size < 0)
		return (NULL);
	if ((ln = ft_total_len(size, strs, sep)) == -1)
		return (NULL);
	if (!(str = malloc(sizeof(char) * (ln + 1))))
		return (NULL);
	i = -1;
	str[0] = '\0';
	while (++i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i < size - 1)
			str = ft_strcat(str, sep);
	}
	return (str);
}
