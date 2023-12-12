/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:17:10 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/12 19:46:11 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	execute_cheapest(int executable, int *stack_a, int *stack_len_a)
{
	int	number;

	number = stack_a[executable];
	while (stack_a[0] != number)
	{
		if (executable < *stack_len_a / 2)
			ra(stack_a, *stack_len_a);
		else
			rra(stack_a, *stack_len_a);
	}
}

int	find_smallest_in_b(int *stack_b, int stack_len_b)
{
	int	min_index;
	int	i;

	min_index = 0;
	i = 1;
	while (i < stack_len_b)
	{
		if (stack_b[i] < stack_b[min_index])
			min_index = i;
		i++;
	}
	return (min_index);
}

int	move_to_b(int *s_a, int *s_b, int *stack_len_a, int *stack_len_b)
{
	int	executable;
	int	spot;

	spot = 0;
	executable = 0;
	for (int i = 0; i < 6; i++)
		printf("1.%d %d\n", s_a[i], s_b[i]);
	executable = find_cheapest_move(s_a, s_b, stack_len_a, stack_len_b);
	execute_cheapest(executable, s_a, stack_len_a);
	printf("executable = %d\n", executable);
	for (int i = 0; i < 6; i++)
		printf("2.%d %d\n", s_a[i], s_b[i]);
	spot = find_spot_in_b(s_a[0], stack_len_b, s_b);
	printf("spot = %d\n", spot);
	if (spot < *stack_len_b / 2)
	{
		while (spot > 0)
		{
			rb(s_b, *stack_len_b);
			spot--;
		}
	}
	else
	{
		while (spot > 0)
		{
			rrb(s_b, *stack_len_b);
			spot--;
		}
	}
	pb(s_a, s_b, stack_len_a, stack_len_b);
	return (spot);
}

void	sort(int *s_a, int *s_b, int *stack_len_a, int *stack_len_b)
{
	int	len;
	int	len_safety;

	len = *stack_len_a - 2;
	len_safety = len;
	pb(s_a, s_b, stack_len_a, stack_len_b);
	pb(s_a, s_b, stack_len_a, stack_len_b);
	if (is_sorted_backwards(*stack_len_b, s_b) == 0)
	{
		sa(s_b);
		len_safety--;
	}
	while (*stack_len_a > 0)
		move_to_b(s_a, s_b, stack_len_a, stack_len_b);
}
// vllt wird nicht genug rotiert:
// nsabia@1-D-15 push_swap05s % ./push_swap 389 289 382 578 212
// pb
// pb
// sa
// 1.382 389
// 1.578 289
// 1.212 0
// 1.0 0
// 1.0 0
// 1.0 0
// executable = 0
// 2.382 389
// 2.578 289
// 2.212 0
// 2.0 0
// 2.0 0
// 2.0 0
// spot = 1
// rrb
// pb
// 1.578 382
// 1.212 289
// 1.0 389
// 1.0 0
// 1.0 0
// 1.0 0
// executable = 0
// 2.578 382
// 2.212 289
// 2.0 389
// 2.0 0
// 2.0 0
// 2.0 0
// spot = 1
// rrb
// pb
// 1.212 578
// 1.0 389
// 1.0 382
// 1.0 289
// 1.0 0
// 1.0 0
// executable = 0
// 2.212 578
// 2.0 389
// 2.0 382
// 2.0 289
// 2.0 0
// 2.0 0
// spot = 3
// rrb
// rrb
// rrb
// pb
// 0 212
// 0 389
// 0 382
// 0 289
// 0 578