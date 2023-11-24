/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:08:33 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/24 18:12:16 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
