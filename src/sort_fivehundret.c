/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_fivehundret.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:24:20 by nsabia            #+#    #+#             */
/*   Updated: 2024/01/15 12:41:52 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	sort_fivehundret(t_sort *sort, int *stack_a, int *stack_b)
{
	int	key_nbr;
	int	n;
	int	n_safe;
	int	c;

	c = 0;
	n_safe = *(sort->len_a) / 13;
	n = 0;
	while (c < 13)
	{
		if (c < 12)
			n = n + n_safe;
		else
			n = *(sort->len_a) + *(sort->len_b) - 1;
		key_nbr = find_keynbr_fivehundret(sort, stack_a, n);
		push_to_b(sort, stack_a, stack_b, key_nbr);
		c++;
	}
	push_back_b(sort, stack_a, stack_b);
}

void	push_to_b(t_sort *sort, int *stack_a, int *stack_b, int key_nbr)
{
	int	i;

	i = 0;
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
}

int	find_keynbr_fivehundret(t_sort *sort, int *stack_a, int n)
{
	int			swapped;
	int			i;
	static int	arr[500];

	swapped = 1;
	i = 0;
	if (n == *(sort->len_a) / 13)
	{
		while (i < *(sort->len_a))
		{
			arr[i] = stack_a[i];
			i++;
		}
		arr_bubble_sort(swapped, sort, arr);
	}
	return (arr[n]);
}

int	*arr_bubble_sort(int swapped, t_sort *sort, int *arr)
{
	int	i;
	int	temp;

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
	return (arr);
}

void	copy_array(int *stack_a, int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		arr[i] = stack_a[i];
		i++;
	}
}
