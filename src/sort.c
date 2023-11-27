/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:17:10 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/27 15:49:32 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort(int *stack_a, int *stack_b, int stack_len)
{
	int	i;
	int	j;
	int	pivot;

	i = 0;
	j = 0;
	pivot = stack_len / 2;
	while (i < pivot)
		stack_b[i] = stack_a[i];
	while (i < stack_len)
	{
		stack_a[j] = stack_a[i];
		stack_a[i] = 0;
		i++;
		j++;
	}
	
}
