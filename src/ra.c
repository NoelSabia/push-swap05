/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:29:43 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/05 10:45:35 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(int *stack_a, int stack_len)
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
	write (1, "ra\n", 4);
}
