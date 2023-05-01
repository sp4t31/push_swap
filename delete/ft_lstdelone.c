/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatel <sonyaspatel@outlook.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 00:00:33 by spatel            #+#    #+#             */
/*   Updated: 2023/04/16 00:00:33 by spatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


/**
 * Frees the memory of the content of the node at 'lst' using 
 * the functions 'del' and 'free', without freeing the memory
 * of 'next'
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->num);
		free(lst);
	}
}
