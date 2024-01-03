/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:45:51 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/31 17:53:52 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freeing(t_sort *sort)
{
	free (sort->len_a);
	free (sort->len_b);
	free (sort);
}

static void	push_swap(int *stack_a, int *stack_size_a, int *stack_b)
{
	t_sort *sort = malloc(sizeof(t_sort));
	sort->len_a = malloc(sizeof(int));
	sort->len_b = malloc(sizeof(int));

	*(sort->len_a) = -1;
	*(sort->len_b) = 0;
	while (++*(sort->len_a) <= *stack_size_a - 1)
		sort->stack_a_arr[*(sort->len_a)] = stack_a[*(sort->len_a)];
	if (*(sort->len_a) <= 5)
		sort_five(stack_a, stack_b, sort);
	else if (*(sort->len_a) > 5 && *(sort->len_a)<= 10)
		sort_ten(stack_a, stack_b, sort);
	freeing(sort);
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
