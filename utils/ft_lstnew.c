/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatel <sonyaspatel@outlook.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 00:03:54 by spatel            #+#    #+#             */
/*   Updated: 2023/04/16 00:03:54 by spatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * Creates a linked list node with allocated memory and
 * value specified. Returns the node.
 * @param value assigns the 'value' property on the t_list node
 * @param next 
*/
t_list	*ft_lstnew(void *value, void *next)
{
	t_list	*lst;

	lst = malloc(sizeof(*lst) * 1);
	if (!lst)
		return (NULL);
	lst->value = value;
	lst->next = next;
	return (lst);
}
