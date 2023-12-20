/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:00:56 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/20 11:03:33 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rb(int *stack_b, int stack_len)
{
	int	i;
	int	temp;

	i = 0;
	if (stack_len > 1)
	{
		temp = stack_b[0];
		while (i < stack_len - 1)
		{
			stack_b[i] = stack_b[i + 1];
			i++;
		}
		stack_b[stack_len - 1] = temp;
	}
	write (1, "rb\n", 4);
}

void	rrb(int *stack_b, int stack_len)
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
	write (1, "rrb\n", 5);
}

void	sb(int *stack_b, int stack_size)
{
	int	temp;

	if (stack_size >= 2)
	{
		temp = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp;
		write (1, "sb\n", 4);
	}
}
