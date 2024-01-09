/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_fivehundret.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:24:20 by nsabia            #+#    #+#             */
/*   Updated: 2024/01/09 09:35:41 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	sort_fivehundret(t_sort *sort, int *stack_a, int *stack_b)
{
	int	key_nbr;
	int	n;
	int	n_safe;
	int	i;
	int	c;

	c = 0;
	n_safe = *(sort->len_a) / 8;
	n = 0;
	while (c < 8)
	{
		i = 0;
		n = n + n_safe;
		key_nbr = find_keynbr_fivehundret(sort, stack_a, n);
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

int	find_keynbr_fivehundret(t_sort *sort, int *stack_a, int n)
{
	int	temp;
	int	swapped;
	int	i;
	int	arr[500];

	swapped = 1;
	i = 0;
	if (n == *(sort->len_a) / 8)
	{
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
	}
	return (arr[n]);
}
