/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:17:10 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/07 16:46:54 by nsabia           ###   ########.fr       */
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

void	do_exception(int *stack_a, int *stack_b,
			int *stack_len_a, int *stack_len_b)
{
	pb(stack_a, stack_b, stack_len_a, stack_len_b);
	rb(stack_b, *stack_len_b);
}

void	rotate_back_b(int *s_b, int *stack_len_b, int spot_safety)
{
	while (spot_safety > 0)
	{
		rrb(s_b, *stack_len_b);
		spot_safety--;
	}
	rrb(s_b, *stack_len_b);
}

int	move_to_b(int *s_a, int *s_b, int *stack_len_a, int *stack_len_b)
{
	int	executable;
	int	spot;

	executable = find_cheapest_move(s_a, s_b, stack_len_a, stack_len_b);
	execute_cheapest(executable, s_a, stack_len_a);
	spot = find_spot_in_b(s_a[0], stack_len_b, s_b);
	while (spot > 0)
	{
		rb(s_b, *stack_len_b);
		spot--;
	}
	pb(s_a, s_b, stack_len_a, stack_len_b);
	return (spot);
}

void	sort(int *s_a, int *s_b, int *stack_len_a, int *stack_len_b)
{
	int	len;
	int	len_safety;
	int	spot_safety;

	len = *stack_len_a - 2;
	len_safety = len;
	pb(s_a, s_b, stack_len_a, stack_len_b);
	pb(s_a, s_b, stack_len_a, stack_len_b);
	if (is_sorted_backwards(*stack_len_b, s_b) == 0)
	{
		sa(s_b);
		len_safety--;
	}
	while (len_safety > 3)
	{
		spot_safety = move_to_b(s_a, s_b, stack_len_a, stack_len_b);
		rotate_back_b(s_b, stack_len_b, spot_safety);
		len_safety--;
	}
	tiny_sort(s_a, *stack_len_a);
}
