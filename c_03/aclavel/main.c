/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 11:41:04 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/10 13:59:06 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);
int 	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strcat(char *dest, char *src);
char	*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	// char	dest[50];
	// char	dest2[50];
	// char	src[] = "hello world";
	// char	to_find[] = "worldness";
	// char	s1[] = "salut monde ca va";
	char str[] = "hellola lola";
	char to_find[] = "";
	// printf("%s\n", ft_strstr(str, to_find));
	// strcpy(dest, s1);	
	// strcpy(dest2, s1);	
	// printf("%s\n", strncat(dest, src, 3));
	// printf("SOURCE: << %s >> \n DESTINATION: << %s >>\n", src, dest);
	// printf("%s\n", ft_strncat(dest2, src, 3));
	// printf("SOURCE: << %s >> \n DESTINATION: << %s >>\n", src, dest2);
	
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}
