/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:17:31 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/25 20:17:19 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	tiny_sort(int *stack_a, t_sort *sort)
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
		rra(stack_a, sort);
	}
	if (a > b && b < c && c < a)
		ra(stack_a, sort);
	if (a < b && b > c && c > a)
	{
		sa(stack_a);
		ra(stack_a, sort);
	}
	if (a < b && b > c && c < a)
		rra(stack_a, sort);
}
