/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatel <spatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:21:53 by spatel            #+#    #+#             */
/*   Updated: 2023/04/03 17:51:15 by spatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	print_stacks(t_sort *s)
{
	int	i;
	int	temp;
	int	length;
	int stack;

	length = ft_strlen(s->stack_a);
	while (i < length)
	{
		temp = s->stack_a[i];
		write(1, temp, 4);
		i++;
	}
}