/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 17:11:33 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/09 11:02:57 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);
void	*ft_print_memory(void *addr, unsigned int size);
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

#include <stdlib.h>
int	main(void)
{
	char	str[150] = "Coucou\ntu vas bien ?\nLa vie est belle quand meme.";
	
	printf("%d\n",ft_strlen(str));
	ft_print_memory(str, 17);
	return (0);

}
