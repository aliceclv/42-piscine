/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 17:11:33 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/09 17:56:53 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putstr_non_printable(char *str);
void	*ft_print_memory(void *addr, unsigned int size);
void	ft_dtohexa(unsigned char c);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy();
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int		ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int	ft_str_is_alpha(char *str);
int	ft_str_is_numeric(char *str);
int	ft_str_is_lowercase(char *str);
int	ft_str_is_uppercase(char *str);
int	ft_str_is_printable(char *str);


int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char	str[150] = "Coucou\ntu vas bien ?\nLa vie est belle quand meme.";
	
	ft_print_memory(str, ft_strlen(str));
	
	return (0);

}
