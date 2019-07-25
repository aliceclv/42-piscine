/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 21:13:08 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/24 11:14:14 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*cp;

	i = 1;
	while (tab[i])
	{
		j = i;
		while ((*cmp)(tab[j], tab[j - 1]) < 0 && j > 1)
		{
			cp = tab[j - 1];
			tab[j - 1] = tab[j];
			tab[j] = cp;
			j--;
		}
		i++;
	}
}
