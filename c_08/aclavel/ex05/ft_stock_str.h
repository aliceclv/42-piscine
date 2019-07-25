/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:35:35 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/19 13:50:09 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef	struct	s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}				t_stock_str;

struct s_stock_str  *ft_strs_to_tab(int ac, char **av);

#endif
