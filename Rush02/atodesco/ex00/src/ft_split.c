/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchemoun <jchemoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:31:04 by jchemoun          #+#    #+#             */
/*   Updated: 2019/07/21 11:51:59 by jchemoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_sepa(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_strlensep(char *str, char *charset)
{
	int i;

	i = 0;
	while (!ft_is_sepa(str[i], charset) && str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src, char *charset)
{
	int		size;
	int		i;
	char	*str_cpy;

	i = 0;
	size = ft_strlensep(src, charset);
	str_cpy = malloc(sizeof(char) * (size + 1));
	if (str_cpy == 0)
		return (0);
	while (i < size)
	{
		str_cpy[i] = src[i];
		i++;
	}
	str_cpy[i] = '\0';
	return (str_cpy);
}

int		ft_count_word(char *str, char *charset)
{
	int		i;
	int		count;
	char	c_prev;

	count = 0;
	i = 0;
	c_prev = str[0];
	while (str[i] != '\0')
	{
		if ((!ft_is_sepa(str[i], charset) && ft_is_sepa(c_prev, charset))
			|| (!ft_is_sepa(str[i], charset) && i == 0))
			count++;
		c_prev = str[i++];
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		i2;
	int		n_word;
	char	c_prev;
	char	**re;

	i = 0;
	n_word = ft_count_word(str, charset);
	re = malloc(sizeof(char*) * (n_word + 1));
	c_prev = str[0];
	i2 = 0;
	while (i < n_word && str[i2] != '\0')
	{
		if ((!ft_is_sepa(str[i2], charset) && ft_is_sepa(c_prev, charset))
			|| (!ft_is_sepa(str[i2], charset) && i2 == 0))
		{
			re[i] = ft_strdup(str + i2, charset);
			i++;
		}
		c_prev = str[i2++];
	}
	re[i] = 0;
	return (re);
}
