/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 20:06:08 by noel              #+#    #+#             */
/*   Updated: 2024/01/05 16:52:52 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_five(int *stack_a, int *stack_b, t_sort *sort)
{
	int	i;

	pb(stack_a, stack_b, sort);
	pb(stack_a, stack_b, sort);
	tiny_sort(stack_a, sort);
	while (*(sort->len_b) > 0)
	{
		i = find_corr_spot(sort, stack_a, stack_b);
		if (i < *(sort->len_a) / 2)
		{
			if (stack_a[i] < stack_b[0])
				i++;
			while (i-- > 0)
				ra(stack_a, sort);
		}
		else
		{
			if (stack_a[i] < stack_b[0])
				i++;
			while (i++ < *(sort->len_a))
				rra(stack_a, sort);
		}
		pa(stack_a, stack_b, sort);
	}
	sort_a(stack_a, sort);
}

void	sort_a(int *stack_a, t_sort *sort)
{
	int	i;
	int	s_i;
	int	smallest;

	i = 0;
	smallest = stack_a[0];
	while (i++ < *(sort->len_a) - 1)
	{
		if (stack_a[i] < smallest)
		{
			smallest = stack_a[i];
			s_i = i;
			i = 0;
		}
	}
	if (s_i <= 2)	
	{
		while (stack_a[0] != smallest)
			ra(stack_a, sort);
	}
	else
	{
		while (stack_a[0] != smallest)	
			rra(stack_a, sort);
	}
}

int	find_corr_spot(t_sort *sort, int *stack_a, int *stack_b)
{
	int	s[500];
	int	i;
	int	result;

	i = 0;
	while (i <= *(sort->len_a) - 1)
	{
		if (s[i] < 0)
			s[i] *= -1;
		s[i] = stack_b[0] - stack_a[i];
		i++;
	}
	i--;
	result = find_nearest(s, i);
	i = 0;
	while (s[i] != result)
		i++;
	return (i);
}

int find_nearest(int arr[500], int len)
{
	int	result;
	int	i;

	i = 0;
	if (arr[0] < 0)
		arr[0] = arr[0] * -1;
	result = arr[0];
	while (i <= len)
	{
		if (arr[i] < 0)
			arr[i] = arr[i] * -1;
		if (arr[i] < result)
		{
			result = arr[i];
			i = 0;
			continue ;
		}
		i++;
	}
	i--;
    return (result);
}
