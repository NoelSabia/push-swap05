/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pseudo-fcts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:51:29 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/06 17:08:03 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	pseudo_ra(int *stack_a, int stack_len_a, int counter)
{
	int	i;
	int	temp;

	i = 0;
	if (stack_len_a > 0)
	{
		temp = stack_a[0];
		while (i < stack_len_a - 1)
		{
			stack_a[i] = stack_a[i + 1];
			i++;
		}
		stack_a[stack_len_a - 1] = temp;
	}
	counter++;
	return (counter);
}

void	pseudo_pb(int number, int *stack_len_b, int *stack_b)
{
	int	i;

	i = *stack_len_b;
	while (i != 0)
	{
		stack_b[*stack_len_b + 1] = stack_b[*stack_len_b];
		i--;
	}
	stack_b[0] = number;
}

int	pseudo_rra(int *stack_a, int len_a, int counter)
{
	int	temp;
	int	i;

	i = len_a - 1;
	if (len_a > 0)
	{
		temp = stack_a[len_a - 1];
		while (i > 0)
		{
			stack_a[i] = stack_a[i - 1];
			i--;
		}
		stack_a[0] = temp;
	}
	counter++;
	return (counter);
}

int	pseudo_rb(int *stack_b, int len_b, int counter)
{
	int	i;
	int	temp;

	i = 0;
	if (len_b > 0)
	{
		temp = stack_b[0];
		while (i < len_b - 1)
		{
			stack_b[i] = stack_b[i + 1];
			i++;
		}
		stack_b[len_b - 1] = temp;
	}
	counter++;
	return (counter);
}
