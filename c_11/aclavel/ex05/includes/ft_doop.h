/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 19:41:49 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/23 20:54:55 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOP_H
# define FT_DOOP_H

# include <unistd.h>

int		ft_sum(int i, int j);
int		ft_div(int i, int j);
int		ft_sub(int i, int j);
int		ft_mult(int i, int j);
int		ft_mod(int i, int j);
int		ft_valid_op(char *str);
void	ft_err_op(char op);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_doop(char **tab);

#endif
