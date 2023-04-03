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
	// can i have underscore in project name
	// how to test ifndef is working

# include <stddef.h> //null
# include <stdlib.h> //malloc
# include <unistd.h>
# include <stdio.h> // delete - printf

// Structs
typedef struct s_sort
{
	void	*stack_a;
	void	*stack_b;
}	t_sort;

// main.c
int		main(int argc, char *argv[]);

// utils.c
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *str);



#endif