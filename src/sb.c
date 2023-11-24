/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:47:05 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/24 16:56:15 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
