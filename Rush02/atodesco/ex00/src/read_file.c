/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchemoun <jchemoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:46:21 by jchemoun          #+#    #+#             */
/*   Updated: 2019/07/21 19:34:25 by jchemoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

char	*file_to_str(char *file)
{
	int		file_desc;
	int		file_size;
	char	buff;
	char	*str_file;
	int		i;

	file_size = 1;
	i = 0;
	buff = 0;
	if (!(str_file = malloc(10000)))
		return (NULL);
	if ((file_desc = open(file, 00)) == -1)
	{
		free(str_file);
		return (NULL);
	}
	while ((file_size = read(file_desc, &buff, 1)) > 0)
	{
		str_file[i] = buff;
		i += file_size;
	}
	close(file_desc);
	return (str_file);
}
