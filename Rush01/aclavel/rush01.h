/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaicic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 23:26:58 by ssaicic           #+#    #+#             */
/*   Updated: 2019/07/14 23:28:16 by ssaicic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

int		test_leftright(int **tab, int y, int x);
int		test_rightleft(int **tab, int y, int x);
int		test_updown(int **tab, int y, int x);
int		test_downup(int **tab, int y, int x);
int		test_diff_line(int **tab, int y, int x);
int		test_diff_column(int **tab, int y, int x);
int		*ft_atotab(char *str, int len);
void	set_views(int **tab, int *tabint, int sq_size, int size);
int		populate(int **tab, int y, int x);

#endif
