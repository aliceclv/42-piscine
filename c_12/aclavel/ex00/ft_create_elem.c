/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclavel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 14:02:12 by aclavel           #+#    #+#             */
/*   Updated: 2019/07/25 14:27:03 by aclavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list	*plist;

	if (!(plist = malloc(sizeof(t_list))))
		return (NULL);
	plist->data = data;
	plist->next = NULL;
	return (plist);
}
