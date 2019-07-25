/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 21:12:09 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/24 14:46:02 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *str1, char *str2)
{
	int		i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0')
		i++;
	return (str1[i] - str2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*cp;

	i = 1;
	while (tab[i])
	{
		j = i;
		while (ft_strcmp(tab[j], tab[j - 1]) < 0)
		{
			cp = tab[j - 1];
			tab[j - 1] = tab[j];
			tab[j] = cp;
			j--;
		}
		i++;
	}
}
