/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchemoun <jchemoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:42:32 by jchemoun          #+#    #+#             */
/*   Updated: 2019/07/21 20:51:40 by jchemoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_rush.h>

void	ft_rush(char *nbr, char *dico)
{
	int		i;
	char	*str_file;
	char	**re;
	t_dict	*tab;

	i = 0;
	if (!(str_file = file_to_str(dico)))
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	re = ft_split(str_file, "\n");
	free(str_file);
	while (re[i] != 0)
		i++;
	tab = ft_struct(i, re);
	if (!ft_checkswap(i, tab))
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	ft_recu(nbr, i, tab);
	ft_putstr("\n");
	free(tab);
}
