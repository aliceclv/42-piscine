/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:01:38 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/22 12:02:51 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_inc(char c, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		if (src[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		wcount(char *str, char *charset)
{
	int		i;
	int		wc;

	i = 1;
	wc = 0;
	if (!ft_inc(str[0], charset))
		wc++;
	while (str[i] != '\0')
	{
		if (ft_inc(str[i - 1], charset) && !ft_inc(str[i], charset))
			wc++;
		i++;
	}
	return (wc);
}

char	*ft_strncpy(char *str, int size)
{
	int		i;
	char	*cp;

	i = 0;
	if (!(cp = malloc(sizeof(char) * size)))
		return (NULL);
	while (i < size)
	{
		cp[i] = str[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}

int		ft_check(char ***tab, char *str, char *charset)
{
	if (str == NULL || charset == NULL || *str == '\0')
		return (0);
	if (!(*tab = malloc(sizeof(char *) * (wcount(str, charset) + 1))))
		return (0);
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	int		ct[3];
	char	**tab;

	tab = NULL;
	if (!ft_check(&tab, str, charset))
		return (NULL);
	*ct = -1;
	ct[2] = 0;
	while (str[++(*ct)])
	{
		ct[1] = *ct;
		while (!ft_inc(str[ct[1]], charset) && str[ct[1]])
			ct[1]++;
		if (ct[1] != *ct)
		{
			if (!(tab[ct[2]] = malloc(sizeof(char) * (ct[1] - *ct))))
				return (NULL);
			tab[ct[2]] = ft_strncpy(&str[*ct], (ct[1] - *ct));
			if (!tab[ct[2]++])
				return (NULL);
			*ct = ct[1];
		}
	}
	tab[ct[2]] = 0;
	return (tab);
}
