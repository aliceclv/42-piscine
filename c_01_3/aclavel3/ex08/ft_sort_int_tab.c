/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 14:32:52 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/06 16:12:56 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 1;
	while (i < size)
	{
		j = i;
		while (*(tab + j) < *(tab + j - 1) && j > 0)
		{
			ft_swap(tab + j, tab + j - 1);
			j--;
		}
		i++;
	}
}
