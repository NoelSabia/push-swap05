/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:03:11 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/05 19:37:03 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ra_two(int *stack_a, int stack_len)
{
	int	i;
	int	temp;

	i = 0;
	if (stack_len > 0)
	{
		temp = stack_a[0];
		while (i < stack_len - 1)
		{
			stack_a[i] = stack_a[i + 1];
			i++;
		}
		stack_a[stack_len - 1] = temp;
	}
}

static void	rb_two(int *stack_b, int stack_len)
{
	int	i;
	int	temp;

	i = 0;
	if (stack_len > 0)
	{
		temp = stack_b[0];
		while (i < stack_len - 1)
		{
			stack_b[i] = stack_b[i + 1];
			i++;
		}
		stack_b[stack_len - 1] = temp;
	}
}

void	rr(int *stack_a, int *stack_b, int stack_len)
{
	ra_two(stack_a, stack_len);
	rb_two(stack_b, stack_len);
	write (1, "rr\n", 4);
}
