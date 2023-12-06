/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:46:18 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/06 15:07:27 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	perform_rotation(int *stack, int stack_len, int number, int is_reverse)
{
	int	counter;

	counter = 0;
	while (stack[0] != number)
	{
		if (is_reverse)
			pseudo_rra(stack, stack_len, counter);
		else
			pseudo_ra(stack, stack_len, counter);
		counter++;
	}
	return (counter);
}

int	calculate_move_cost(int *stack_a, int *stack_b,
			int *stack_len_a, int *stack_len_b)
{
	int			counter;
	int			*stack_a_clone;
	int			*stack_b_clone;
	int			number;
	static int	i = 0;

	number = stack_a[i];
	stack_a_clone = malloc(*stack_len_a * sizeof(int));
	stack_b_clone = malloc(*stack_len_b * sizeof(int));
	ft_memcpy(stack_a_clone, stack_a, *stack_len_a * sizeof(int));
	ft_memcpy(stack_b_clone, stack_b, *stack_len_b * sizeof(int));
	if (i < *stack_len_a / 2)
		counter = perform_rotation(stack_a_clone, *stack_len_a, number, 0);
	else
		counter = perform_rotation(stack_a_clone, *stack_len_a, number, 1);
	counter += find_pseudo_spot_in_b(stack_a_clone[0],
			stack_len_b, stack_b_clone);
	i++;
	if (i == *stack_len_a)
		i = 0;
	free(stack_a_clone);
	free(stack_b_clone);
	return (counter);
}

int	find_cheapest_move(int *stack_a, int *stack_b,
			int *stack_len_a, int *stack_len_b)
{
	int	j;
	int	costs[10000];
	int	min_cost;
	int	min_index;

	j = 0;
	while (j < *stack_len_a)
	{
		costs[j] = calculate_move_cost(stack_a, stack_b,
				stack_len_a, stack_len_b);
		j++;
	}
	j = 0;
	min_cost = costs[0];
	min_index = 0;
	while (j < *stack_len_a)
	{
		if (costs[j] < min_cost)
		{
			min_cost = costs[j];
			min_index = j;
		}
		j++;
	}
	return (min_index);
}

int	find_pseudo_spot_in_b(int number, int *stack_len_b, int *stack_b_clone)
{
	int	len_b;
	int	counter;
	int	i;

	len_b = *stack_len_b;
	counter = 0;
	i = 0;
	while (number < stack_b_clone[0])
	{
		pseudo_rb(stack_b_clone, len_b, counter);
		counter++;
		i++;
		if (i == 10000)
			break ;
	}
	if (i >= 10000)
		counter += 2;
	pseudo_pb(number, stack_len_b, stack_b_clone);
	counter++;
	return (counter);
}
