/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:07:01 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/05 18:28:52 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(int *stack_a, int stack_len)
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
	write (1, "rra\n", 5);
}
// da lauft etwas falsch, wenn rra als letztes ausgefuhrt wird