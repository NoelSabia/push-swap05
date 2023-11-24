/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:52:06 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/24 18:23:18 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ss(int *stack_a, int stack_len)
{
	sa_two(stack_a);
	sb_two(stack_a, stack_len);
	write (1, "ss\n", 4);
}

static void	sa_two(int *stack_a)
{
	int	i;

	i = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = i;
}

static void	sb_two(int *stack_b, int stack_size)
{
	int	temp;

	if (stack_size >= 2)
	{
		temp = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp;
	}
}
