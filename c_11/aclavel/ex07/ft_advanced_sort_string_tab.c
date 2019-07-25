/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 21:13:08 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/23 21:14:38 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*cp;

	i = 0;
	while (tab[i])
	{
		j = i;
		while (cmp(av[j], av[j - 1]) < 0 && j > 1)
		{
			cp = av[j - 1];
			av[j - 1] = av[j];
			av[j] = cp;
			j--;
		}
		i++;
	}
}
