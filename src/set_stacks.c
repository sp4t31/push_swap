/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_stacks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatel <sonyaspatel@outlook.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:41:04 by spatel            #+#    #+#             */
/*   Updated: 2023/04/25 17:41:04 by spatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stddef.h> //null
# include <stdlib.h> //malloc

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

static int		check_ints_only(t_struct *s);
static int		check_no_dupl(t_struct *s);

/**
 * Convert commandline arguments into a linked list of integers 'stack_a',
 * with the first int as the top of the stack.
 * @returns the first element of linked list 'stack_a', or returns (1)
 * if finds a duplicate or non-int argument
*/
int set_stacks(t_struct *s, int argc, char **argv)
{
	t_list *node;
	t_list *top_of_stack;

	if (!node)
		return (NULL);
  if (argc == 1 || check_ints_only(&s) == 1 || check_no_dupl(&s) == 1)
	  return (1);

	node = ft_lstnew(s->argv[s->argc + 1]);
	while (argc >= 1)
	{
		t_list *new_node;

		new_node = malloc(sizeof(t_list) * 1);
		if (!new_node)
			return (NULL);
		ft_lstadd_front(node, new_node);
		top_of_stack = new_node;
		argc--;
	}
	free(s->argv);
  return (0);
}

/**
 * Iterate through each argument's addresses, and
 * checks that they are of int type.
 * Skips 0th index of argv (which is the program name)
*/
static int	check_ints_only(t_struct *s)
{
	int	i;

	i = 1;
	printf("sizeof(int) = %d", sizeof(int));
	while (i < s->argc)
	{
		// check dereferencing - delete later
		// check if need the extra brackets - delete later
		printf("%d", (s->argv)[i]);
		
		// need size comparison if malloc already checks for this?
		if (sizeof((s->argv)[i]) != sizeof(int) ||
			(s->argv)[i] < -2147483648 ||
			(s->argv)[i] > 2147483647)
			return (1);
		i++;
	}
	return (0);
}

/**
 * Compare each int with every int that comes after it,
 * if a duplicate is found, return (1)
 * Skips 0th index of argv (which is the program name)
*/
static int	check_no_dupl(t_struct *s)
{
	int	i;
	int j;

	i = 1;
	while (i < s->argc)
	{
		// check dereferencing - delete later
		printf("%d", (s->argv)[i]);

		j = i + 1;		
		while (j < s->argc)
		{
			if ((s->argv)[i] == (s->argv)[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}