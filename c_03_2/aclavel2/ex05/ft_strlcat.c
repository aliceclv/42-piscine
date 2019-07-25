/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 09:12:02 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/10 12:27:51 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_s;
	unsigned int	len_d;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dest);
	if (size < 1)
		return (len_s);
	if (size < len_d)
		return (len_s + size);
	i = 0;
	while (src[i] != '\0' && i + len_d < size - 1)
	{
		dest[i + len_d] = src[i];
		i++;
	}
	dest[i + len_d] = '\0';
	return (len_d + len_s);
}
