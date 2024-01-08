/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundret.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:52:53 by noel              #+#    #+#             */
/*   Updated: 2024/01/08 14:18:31 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	sort_hundret(t_sort *sort, int *stack_a, int *stack_b)
{
	int	key_nbr;
	int	n;
	int	n_safe;
	int	i;
	int	c;

	c = 0;
	n_safe = *(sort->len_a) / 4;
	n = 0;
	while (c < 4)
	{
		i = 0;
		n = n + n_safe;
		key_nbr = find_keynbr(sort, stack_a, n);
		while (i < *(sort->len_a))
		{
			if (stack_a[0] <= key_nbr)
			{
				pb(stack_a, stack_b, sort);
				continue ;
			}
			else
				ra(stack_a, sort);
			i++;
		}
		c++;
	}
	push_back_b(sort, stack_a, stack_b);
}

void	push_back_b(t_sort *sort, int *stack_a, int *stack_b)
{
	int	i;

	i = 0;
	while (*(sort->len_b) > 0)
	{
		if (find_biggest(sort, stack_b) < *(sort->len_b) / 2)
			rb(stack_b, sort);
		else
			rrb(stack_b, sort);
		if (stack_b[i] == find_biggest(sort, stack_b))
			pa(stack_a, stack_b, sort);
	}
}

int	find_biggest(t_sort *sort, int *stack_b)
{
	int	i;
	int	biggest_num;

	i = 0;
	biggest_num = stack_b[0];
	while (i < *(sort->len_b))
	{
		if (stack_b[i] > biggest_num)
		{
			biggest_num = stack_b[i];
			i = 0;
			continue ;
		}
		i++;
	}
	return (biggest_num);
}

int	find_keynbr(t_sort *sort, int *stack_a, int n)
{
	int	temp;
	int	swapped;
	int	i;
	int	arr[500];

	swapped = 1;
	i = 0;
	while (i < *(sort->len_a))
	{
		arr[i] = stack_a[i];
		i++;
	}
	while (swapped == 1)
	{
		swapped = 0;
		i = 0;
		while (i < *(sort->len_a))
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
	}
	return (arr[n]);
}
