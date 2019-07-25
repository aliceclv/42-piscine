/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:57:56 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/23 15:39:22 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		dir;

	if (!tab)
		return (0);
	if (length <= 1)
		return (1);
	dir = 0;
	i = 1;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) == 0)
			i++;
		else
		{
			if (!dir)
				dir = (*f)(tab[i], tab[i + 1]);
			if (((*f)(tab[i], tab[i + 1]) * dir) < 0)
				return (0);
			i++;
		}
	}
	return (1);
}
