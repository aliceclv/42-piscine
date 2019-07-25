/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchemoun <jchemoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 15:51:31 by jchemoun          #+#    #+#             */
/*   Updated: 2019/07/21 20:52:41 by jchemoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_rush.h>

void				ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &str[i], 1);
		i++;
	}
}

int					ft_indice(t_unsigned_ll nbr)
{
	int i;

	i = 0;
	while (nbr > 1)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

t_unsigned_ll		ft_atoi_nul(char *nbr, int cut)
{
	int					i;
	t_unsigned_ll		re;

	i = 0;
	re = 0;
	while (nbr[i] != '\0' && i < cut)
	{
		re = re * 10 + (nbr[i] - 48);
		i++;
	}
	return (re);
}

void				ft_print_nbr(t_unsigned_ll nbr, int size, t_dict *dt)
{
	int i;

	i = size - 1;
	while (i > 0)
	{
		if ((nbr / dt[i].cle) > 0 && nbr > 99)
		{
			ft_print_nbr((nbr / dt[i].cle), i, dt);
			ft_putstr(dt[i].str);
			ft_putstr(" ");
			ft_print_nbr((nbr % dt[i].cle), i, dt);
			return ;
		}
		else if ((nbr / dt[i].cle) > 0 && nbr > 0)
		{
			ft_putstr(dt[i].str);
			ft_putstr(" ");
			ft_print_nbr((nbr % dt[i].cle), i, dt);
			return ;
		}
		i--;
	}
}

void				ft_recu(char *str, int size, t_dict *dt)
{
	int i;
	int indice;
	int decal;
	int base_nbr;
	int *o;

	i = 0;
	o = &i;
	indice = ft_indice((unsigned long long)(dt[size - 1].cle));
	if (ft_strlen(str) <= indice)
	{
		base_nbr = ft_atoi_nul(str, indice);
		ft_print_nbr(base_nbr, size, dt);
	}
	else
	{
		if (!(decal = ft_strlen(str) % indice))
			decal = indice;
		base_nbr = ft_atoi_nul(str, decal);
		ft_print_nbr(base_nbr, size, dt);
		ft_putstr(dt[size - 1].str);
		ft_putstr(" ");
		ft_recu(str + decal, size, dt);
	}
}
