/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:45:51 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/20 15:33:58 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_swap(int *stack_a, int *stack_size_a, int *stack_b)
{
	int			i;
	int			index[100000];

	i = -1;
	while (++i < *stack_size_a)
		index[i] = stack_a[i];
	for (int i = 0; i < *stack_size_a; i++)
		printf("%d\n", index[i]);
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
	for (int i = 0; i < 15; i++)
		printf("%d %d\n", stack_a[i], stack_b[i]);
	free (stack_a);
	free (stack_b);
	return (0);
}
