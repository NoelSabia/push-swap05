/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:57:32 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/24 18:53:41 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(int *stack_a, int *stack_b, int stack_len)
{
	int	i;

	i = stack_len;
	while (i != 0)
	{
		stack_a[stack_len + 1] = stack_a[stack_len];
		i--;
	}
	stack_a[0] = stack_b[0];
	write (1, "pa\n", 4);
}
