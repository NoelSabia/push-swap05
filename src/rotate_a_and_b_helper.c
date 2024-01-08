/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a_and_b_helper.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:05:15 by nsabia            #+#    #+#             */
/*   Updated: 2024/01/08 17:17:18 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	rra_two(int *stack_a, int stack_len)
{
	int	i;
	int	temp;

	if (stack_len > 0)
	{
		temp = stack_a[stack_len - 1];
		i = stack_len - 1;
		while (i > 0)
		{
			stack_a[i] = stack_a[i - 1];
			i--;
		}
		stack_a[0] = temp;
	}
}

static void	rrb_two(int *stack_b, int stack_len)
{
	int	i;
	int	temp;

	if (stack_len > 0)
	{
		temp = stack_b[stack_len - 1];
		i = stack_len - 1;
		while (i > 0)
		{
			stack_b[i] = stack_b[i - 1];
			i--;
		}
		stack_b[0] = temp;
	}
}

void	rrr(int *stack_a, int *stack_b, int stack_len)
{
	rra_two(stack_a, stack_len);
	rrb_two(stack_b, stack_len);
	write (1, "rrr\n", 4);
}

void	sa_two(int *stack_a)
{
	int	i;

	i = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = i;
}

void	sb_two(int *stack_b, int stack_size)
{
	int	temp;

	if (stack_size >= 2)
	{
		temp = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp;
	}
}
