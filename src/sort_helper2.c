/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helper2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:40:11 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/12 18:39:56 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_smallest_number(int *array, int *stack_len_b)
{
	int	i;
	int	min_index;

	i = 0;
	min_index = 0;
	while (i < *stack_len_b)
	{
		if (array[i] < array[min_index])
		{
			min_index = i;
		}
		i++;
	}
	return (min_index);
}

int	find_spot_in_b(int number, int *stack_len_b, int *stack_b)
{
	int	array[10000];
	int	checker_array[10000];
	int	i;
	int	result;

	i = -1;
	while (++i < *stack_len_b)
		array[i] = stack_b[i];
	i = -1;
	while (++i < *stack_len_b)
		checker_array[i] = stack_b[i] - number;
	result = find_smallest_number(checker_array, stack_len_b);
	if (result < array[result])
		return (result);
	else
		return (result);
	return (result);
}

// int	find_spot_in_b(int number, int *stack_len_b, int *stack_b)
// {
// 	int	i;

// 	i = 0;
// 	while (i < *stack_len_b)
// 	{
// 		if (stack_b[i] < number)
// 			return (i);
// 		i++;
// 	}
// 	return (i);
// }
