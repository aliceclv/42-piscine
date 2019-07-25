/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 10:45:25 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/06 18:50:10 by hskikdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_bline(int x)
{
	int j;

	j = 2;
	ft_putchar('/');
	if (x != 1)
	{
		while (j++ < x)
			ft_putchar('*');
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	ft_mline(int x)
{
	int j;

	j = 2;
	ft_putchar('*');
	if (x != 1)
	{
		while (j++ < x)
			ft_putchar(' ');
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	ft_last_line(int x)
{
	int j;

	j = 2;
	ft_putchar('\\');
	if (x != 1)
	{
		while (j++ < x)
			ft_putchar('*');
		ft_putchar('/');
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
		ft_last_line(x);
	}
}
