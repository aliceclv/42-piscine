/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reporche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 09:59:10 by reporche          #+#    #+#             */
/*   Updated: 2019/07/06 18:53:08 by hskikdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int		main()
{
	rush(5, 5);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(10, 10);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(100, 100);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(3, 3);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(1, 9);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(9, 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(0, 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(1, 0);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(0, 0);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(-1, -1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(-1, 0);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(0, -1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(2, 0);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(0, 2);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(2, 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(1, 2);
	write(1, "\n", 1);
	write(1, "\n", 1);
	rush(21, 42);
	write(1, "\n", 1);
	write(1, "\n", 1);
	return(0);
}
