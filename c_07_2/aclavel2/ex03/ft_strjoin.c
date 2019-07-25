/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:09:33 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/24 22:12:52 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_slen(char *str)
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
	j = ft_slen(dest);
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

int		ft_len(int size, char **strs)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
	{
		if (strs[i] == NULL)
			return (-1);
		len += ft_slen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		length;
	int		i;

	if (sep == NULL || strs == NULL || size < 0)
		return (NULL);
	if (size == 0)
	{
		if (!(str = malloc(sizeof(char))))
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if ((length = ft_len(size, strs)) == -1)
		return (NULL);
	if (!(str = malloc(sizeof(char) * (length + ft_slen(sep) * (size - 1) + 1))))
		return (NULL);
	i = -1;
	while (++i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i < size - 1)
			str = ft_strcat(str, sep);
	}
	return (str);
}
