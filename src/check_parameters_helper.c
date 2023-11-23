/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parameters_helper.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:26:51 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/23 18:56:35 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_parameters_stack_a(int *stack_a, int *stack_b)
{
	int	i;

	i = 0;
	while (stack_a[i] != '\0')
	{
		if (stack_a[i] > INT_MAX || stack_a[i] < INT_MIN)
		{
			write (1, "hierr\n", 7);
			free (stack_a);
			free (stack_b);
			exit(0);
		}
		i++;
	}
	check_if_only_numbers(stack_a, stack_b);
	check_duplicates_stack_a(stack_a, stack_b);
}

void	check_if_only_numbers(int *stack_a, int *stack_b)
{
	int	i;

	i = 0;
	while (stack_a[i] != '\0')
	{
		if ((stack_a[i] < 0 || (stack_a[i] >= 0 && stack_a[i] <= 9))) //need to exklude special chars
		{
			i++;
			continue ;
		}
		else
		{
			write (1, "unten\n", 7);
			free (stack_a);
			free (stack_b);
			exit(0);
		}
	}
}

void	check_duplicates_stack_a(int *stack_a, int *stack_b)
{
	int	i;
	int	j;
	int	value_a;
	int	value_b;

	i = 0;
	while (stack_a[i] != '\0')
	{
		j = i + 1;
		value_a = stack_a[i];
		while (stack_a[j] != '\0')
		{
			value_b = stack_a[j];
			if (value_a == value_b)
			{
				write (1, "dup\n", 7);
				free (stack_a);
				free (stack_b);
				exit(0);
			}
			j++;
		}
		i++;
	}
}
