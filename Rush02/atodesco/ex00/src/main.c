/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchemoun <jchemoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:28:50 by jchemoun          #+#    #+#             */
/*   Updated: 2019/07/21 20:53:13 by jchemoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_rush.h>

int	main(int argc, char **argv)
{
	if (argc > 3 || argc == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (ft_check_nbr(argv[1]))
		ft_rush(argv[1], argv[2] ? argv[2] : "src/numbers.dict");
	else
		ft_putstr("Error\n");
	return (0);
}
