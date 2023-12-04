/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:14:26 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/02 10:48:51 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pb(int *stack_a, int *stack_b, int *stack_len_a, int *stack_len_b)
{
	int	i;

	if (*stack_len_a > 0)
	{
		i = *stack_len_b;
		while (i > 0)
		{
			stack_b[i] = stack_b[i - 1];
			i--;
		}
		stack_b[0] = stack_a[0];
		i = 0;
		while (i < *stack_len_a - 1)
		{
			stack_a[i] = stack_a[i + 1];
			i++;
		}
		stack_a[*stack_len_a - 1] = 0;
		(*stack_len_a)--;
		(*stack_len_b)++;
		write (1, "pb\n", 3);
	}
}
