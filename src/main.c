/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:45:51 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/07 18:17:14 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_swap(int *stack_a, int *stack_size_a, int *stack_b)
{
	int	stack_len_a;
	int	stack_len_b;
	int	stack_size_b_value;
	int	*stack_size_b;

	stack_size_b = &stack_size_b_value;
	stack_size_b_value = 0;
	stack_len_a = *stack_size_a;
	stack_len_b = *stack_size_b;
	if (stack_len_a == 2 && is_sorted(stack_len_a, stack_a) == 0)
		sa(stack_a);
	else if ((stack_len_a == 3) && is_sorted(stack_len_a, stack_a) == 0)
		tiny_sort(stack_a, stack_len_a);
	else if (stack_len_a > 3 && is_sorted(stack_len_a, stack_a) == 0)
		sort(stack_a, stack_b, &stack_len_a, &stack_len_b);
	// push_back_result(stack_a, stack_b, stack_len_a, stack_len_b);
}

int	main(int argc, char *argv[])
{
	int	*stack_a;
	int	*stack_b;
	int	stack_size_value;
	int	*stack_size;

	stack_size = &stack_size_value;
	stack_a = (int *)malloc((10000) * sizeof(int) + 1);
	stack_b = (int *)malloc((10000) * sizeof(int) + 1);
	if (!stack_a || ! stack_b)
	{
		write (1, "Error\n", 7);
		free (stack_a);
		free (stack_b);
		exit (0);
	}
	stack_a = push_in_stack(stack_size, argv, stack_a, stack_b);
	check_parameters(argc, argv, stack_a, stack_b);
	if (is_sorted(stack_size_value, stack_a) == 0)
		push_swap(stack_a, stack_size, stack_b);
	for (int i = 0; i < 10; i++)
		printf("%d %d\n", stack_a[i], stack_b[i]);
	free (stack_a);
	free (stack_b);
	return (0);
}
