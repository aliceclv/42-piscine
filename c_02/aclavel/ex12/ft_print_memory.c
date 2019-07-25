/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:56:19 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/09 11:00:55 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printdtohexa(long int d, int size)
{
	int		u;
	char	*hexa;

	hexa = "0123456789abcdef";
	if (size > 0)
	{
		ft_printdtohexa(d / 16, size - 1);
		u = d % 16;
		ft_putchar(hexa[u]);
		size--;
	}
}

void	ft_print_address(void *addr, int i)
{
	long	lng;

	lng = (long)(&(addr[i]));
	ft_printdtohexa(lng, 15);
}

void	ft_printhexa(void *addr, int i, int size)
{
	int j;

	j = 0;
	while (j < 16)
	{
		if (i + j >= size)
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		else
			ft_printdtohexa((long)(((char*)(addr))[i + j]), 2);
		if (j % 2 != 0)
			ft_putchar(' ');
		j++;
	}
}

void	ft_put_printable_str(void *addr, int i, int size)
{
	int 	j;
	char	c;

	j = 0;
	while (i + j < i + 16 && i + j < size)
	{
		c = ((char*)(addr))[i + j];
		if (c < ' ' || c > '~')
			ft_putchar('.');
		else
			ft_putchar(c);
		j++;
	}
}

void	ft_print_line(void *addr, int i, int size)
{
	int		index;

	index = i * 16;
	ft_print_address(addr, index);
	ft_putchar(':');
	ft_putchar(' ');
	ft_printhexa(addr, index, size);	
	ft_put_printable_str(addr, index, size);
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int i;
	int repeat;

	if (size < 1 || addr == NULL)
		return (NULL);
	i = 0;
	repeat = size / 16 + ((size % 16) ? 1 : 0);
	while (i < repeat)
	{
		ft_print_line(addr, i, size);
		i++;
	}
	return (addr);
}
