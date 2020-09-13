/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 14:28:16 by kaye              #+#    #+#             */
/*   Updated: 2020/08/27 16:41:19 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

t_list		*ft_create_elem(void *data)
{
	t_list *list;
	
	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	list->data = data;
	list->next = NULL;

	return (list);
}

int main()
{
	t_list *list;

	list = ft_create_elem("element1");
	if (list) // Verifier bien si les elements sont bien crees
		printf("%s\n", list->data);
	return (0);
}
