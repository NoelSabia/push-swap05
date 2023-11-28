/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:57:32 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/28 15:58:42 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(int *stack_a, int *stack_b, int *stack_len_a, int *stack_len_b)
{
	int	i;

	if (*stack_len_b > 0)
	{
		i = *stack_len_a;
		while (i > 0)
		{
			stack_a[i] = stack_a[i - 1];
			i--;
		}
		stack_a[0] = stack_b[0];
		i = 0;
		while (i < *stack_len_b - 1)
		{
			stack_b[i] = stack_b[i + 1];
			i++;
		}
		stack_b[*stack_len_b - 1] = 0;
		(*stack_len_a)++;
		(*stack_len_b)--;
		write (1, "pa\n", 4);
	}
}
