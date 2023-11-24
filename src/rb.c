/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:57:56 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/24 18:00:01 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rb(int *stack_b, int stack_len)
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
	write (1, "rb\n", 4);
}
