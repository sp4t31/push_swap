/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatel <spatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:32:41 by spatel            #+#    #+#             */
/*   Updated: 2023/04/03 16:50:32 by spatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h> //null
# include <stdlib.h> //malloc
# include <unistd.h>
# include <stdio.h> // delete - printf

/**
 * Struct for each element of a linked list
 * @param value the number to be sorted
 * @param index ?
 * @param pos ?
 * @param target_pos ?
 * @param cost_a no. actions to rotate stack_a so element at target_pos gets to top of stack_a
 * @param cost_b no. actions to rotate stack_b so element at target_pos gets to top of stack_b
 * @param next pointer to the next node in the list
*/
typedef struct s_list
{
	int						value;
	int						index;
	int						pos;
	int						target_pos;
	int						cost_a;
	int						cost_b;
	struct s_list	*next;
}	t_list;

/**
 * Struct to hold input parameters and stacks a & b, 
*/
typedef struct s_struct
{
	int		argc;
	char	**argv;
	t_list	*stack_a;
	t_list	*stack_b;
}	t_struct;

// src
int			main(int argc, char **argv);

// utils
int			ft_atoi(const char *str);
void		ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);
size_t	ft_strlen(const char *str);



#endif