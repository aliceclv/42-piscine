/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchemoun <jchemoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:09:43 by atodesco          #+#    #+#             */
/*   Updated: 2019/07/21 19:26:44 by jchemoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_rush.h>

t_dict	*ft_struct(int nb, char **res)
{
	int				i;
	int				j;
	t_dict			*tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(t_dict) * (nb));
	if (tab == NULL)
		return (tab);
	while (i < nb)
	{
		tab[i].cle = (unsigned long long)ft_atoi_ns(res[i]);
		while (res[i][j] != ':')
			j++;
		j++;
		while (res[i][j] == ' ')
			j++;
		tab[i].str = ft_ardup(&res[i][j]);
		i++;
		j = 0;
	}
	return (tab);
}
