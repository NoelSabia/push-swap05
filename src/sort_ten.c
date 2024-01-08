/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ten.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:12:07 by nsabia            #+#    #+#             */
/*   Updated: 2024/01/08 14:20:06 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	sort_ten(int *stack_a, int *stack_b, t_sort *sort)
{
	int	num;
	int	i;
	int	len_a;
	int	len_b;
	int	len_safe;

	i = 0;
	len_a = *(sort->len_a);
	while (len_a > 0)
	{
		i = 0;
		len_safe = -1;
		num = find_smallest_int(sort);
		while (num != sort->stack_a_arr[i])
			i++;
		rotate_to_top(i, stack_a, num, sort);
		pb(stack_a, stack_b, sort);
		len_a--;
		while (++len_safe <= len_a)
			sort->stack_a_arr[len_safe] = stack_a[len_safe];
	}
	len_b = *(sort->len_b) + 1;
	while (--len_b > 0)
		pa(stack_a, stack_b, sort);
}

int	find_smallest_int(t_sort *sort)
{
	int	c;
	int	result;

	result = sort->stack_a_arr[0];
	c = 0;
	while (c < *(sort->len_a))
	{
		if (sort->stack_a_arr[c] < result)
		{
			result = sort->stack_a_arr[c];
			c = 0;
		}
		c++;
	}
	return (result);
}

void	rotate_to_top(int i, int *stack_a, int num, t_sort *sort)
{
	if (i < *(sort->len_a) / 2)
	{
		while (stack_a[0] != num)
			ra(stack_a, sort);
	}
	else
	{
		while (stack_a[0] != num)
			rra(stack_a, sort);
	}
}
