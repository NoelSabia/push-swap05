/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:17:31 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/27 14:43:30 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	tiny_sort(int *stack_a, int stack_len)
{
	int	a;
	int	b;
	int	c;

	a = stack_a[0];
	b = stack_a[1];
	c = stack_a[2];
	if (a > b && b < c && c > a)
		sa(stack_a);
	if (a > b && b > c && c < a)
	{
		sa(stack_a);
		rra(stack_a, stack_len);
	}
	if (a > b && b < c && c < a)
		ra(stack_a, stack_len);
	if (a < b && b > c && c > a)
	{
		sa(stack_a);
		ra(stack_a, stack_len);
	}
	if (a < b && b > c && c < a)
		rra(stack_a, stack_len);
}