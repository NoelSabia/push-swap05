/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:45:51 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/22 11:19:56 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_swap(int *stack_a, int argc)
{
	if (argc == 2 && is_sorted(argc, stack_a) == 0)
	{
		
	}
}

int	main(int argc, char *argv[])
{
	int	*stack_a;
	int	*stack_b;

	stack_a = (int *)malloc((argc) * sizeof(int) + 1);
	stack_b = (int *)malloc((argc) * sizeof(int) + 1);
	if (!stack_a || ! stack_b)
	{
		write (1, "Error\n", 7);
		exit (1);
	}
	// argv_string_handling(argc, argv);
	stack_a = push_in_stack(argc, argv, stack_a);
	check_parameters(argc, argv, stack_a, stack_b);
	push_swap(stack_a, argc);
	for (int i = 0; i < argc - 1; i++)
	{
		printf("%d\n", stack_a[i]);
	}
	free (stack_a);
	free (stack_b);
	return (0);
}
