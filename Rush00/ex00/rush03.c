/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 10:45:25 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/06 18:18:19 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_bline(int x)
{
	int j;

	j = 2;
	ft_putchar('A');
	if (x != 1)
	{
		while (j++ < x)
			ft_putchar('B');
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_mline(int x)
{
	int j;

	j = 2;
	ft_putchar('B');
	if (x != 1)
	{
		while (j++ < x)
			ft_putchar(' ');
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x < 1 || y < 1)
		return ;
	if (y == 1)
		ft_bline(x);
	else
	{
		i = 2;
		ft_bline(x);
		while (i++ < y)
			ft_mline(x);
		ft_bline(x);
	}
}
