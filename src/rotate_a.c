/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:00:44 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/20 11:03:16 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(int *stack_a, int stack_len)
{
	int	i;
	int	temp;

	i = 0;
	if (stack_len > 0)
	{
		temp = stack_a[0];
		while (i < stack_len - 1)
		{
			stack_a[i] = stack_a[i + 1];
			i++;
		}
		stack_a[stack_len - 1] = temp;
	}
	write (1, "ra\n", 4);
}

void	rra(int *stack_a, int stack_len)
{
	int	i;
	int	temp;

	if (stack_len > 0)
	{
		temp = stack_a[stack_len - 1];
		i = stack_len - 1;
		while (i > 0)
		{
			stack_a[i] = stack_a[i - 1];
			i--;
		}
		stack_a[0] = temp;
	}
	write (1, "rra\n", 5);
}

void	sa(int *stack_a)
{
	int	i;

	i = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = i;
	write (1, "sa\n", 4);
}
