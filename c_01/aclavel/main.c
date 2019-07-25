/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 11:28:02 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/06 19:52:17 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void 	ft_swap(int *a, int *b);
void 	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void 	ft_putstr(char *str);
void	ft_rev_int_tab(int *tab, int size);
void 	ft_sort_int_tab(int *tab, int size);
int	ft_strlen(char *str);

int main(void)
{
	int i;
	int j;
	int *div;
	int *mod;
	char *str;
	int k[5] = {1, 2, 3, 4, 5};
	int m[3] = {-1, 5, 8};
	int l[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
	
	i = 13;
	j = 4;
	div = &i;
	mod = &j;
	str = "hello world";
	// printf("%d", ft_strlen(str));
//	ft_rev_int_tab(k, 5);
//	ft_rev_int_tab(m, 3);
//	ft_rev_int_tab(l, 10);
//	printf("%i%i%i%i%i\n", k[0], k[1], k[2], k[3], k[4]);
//	printf("%i%i%i\n", m[0], m[1], m[2]);
//	printf("%i%i%i%i%i%i%i%i%i%i\n", l[0], l[1], l[2], l[3], l[4], l[5], l[6], l[7], l[8], l[9]);

	ft_rev_int_tab(m, 2);
	printf("%i%i%i%i%i%i%i%i%i%i\n", m[0], m[1], m[2], l[3], l[4], l[5], l[6], l[7], l[8], l[9]);
		
	return (0);
}
