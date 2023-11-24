/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:42:42 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/24 16:00:05 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sorted(int stack_size, int *stack_a)
{
	int	i;

	i = 0;
	while (i < stack_size)
	{
		if (stack_a[i] < stack_a[i - 1])
			return (0);
		i++;
	}
	return (1);
}
