/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchemoun <jchemoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:10:53 by atodesco          #+#    #+#             */
/*   Updated: 2019/07/21 20:53:33 by jchemoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_dict
{
	unsigned long long	cle;
	char				*str;
}				t_dict;

typedef	unsigned long long t_unsigned_ll;

char			*file_to_str(char *file);
char			*ft_ardup(char *str);
int				ft_atoi_ns(char *nbr);
int				ft_strlen(char *str);
int				ft_atoi_ns(char *nbr);
void			ft_putstr(char *str);
int				ft_check_nbr(char *str);
void			ft_rush(char *nbr, char *dico);
void			ft_recu(char *str, int size, t_dict *dt);
int				ft_checkswap(int size, t_dict *dt);
t_dict			*ft_struct(int nb, char **res);
char			**ft_split(char *str, char *charset);

#endif
