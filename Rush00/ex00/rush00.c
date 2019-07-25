/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskikdi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 16:28:20 by hskikdi           #+#    #+#             */
/*   Updated: 2019/07/06 18:43:23 by hskikdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_bline(int x)
{
	int j;

	j = 2;
	ft_putchar('o');
	if (x != 1)
	{
		while (j++ < x)
			ft_putchar('-');
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	ft_mline(int x)
{
	int j;

	j = 2;
	ft_putchar('|');
	if (x != 1)
	{
		while (j++ < x)
			ft_putchar(' ');
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x < 1 || y < 1)
		return ;
	if (y == 1)
	{
		ft_bline(x);
	}
	else if (!(x <= 0 || y <= 0))
	{
		i = 2;
		ft_bline(x);
		while (i++ < y)
			ft_mline(x);
		ft_bline(x);
	}
}
