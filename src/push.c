/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:59:59 by nsabia            #+#    #+#             */
/*   Updated: 2024/01/08 17:18:06 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(int *stack_a, int *stack_b, t_sort *sort)
{
	int	i;

	if (*(sort->len_b) > 0)
	{
		i = *(sort->len_a);
		while (i > 0)
		{
			stack_a[i] = stack_a[i - 1];
			i--;
		}
		stack_a[0] = stack_b[0];
		i = 0;
		while (i < *(sort->len_b) - 1)
		{
			stack_b[i] = stack_b[i + 1];
			i++;
		}
		stack_b[*(sort->len_b) - 1] = 0;
		++*(sort->len_a);
		--*(sort->len_b);
		write (1, "pa\n", 3);
	}
}

void	pb(int *stack_a, int *stack_b, t_sort *sort)
{
	int	i;

	if (*(sort->len_a) > 0)
	{
		i = *(sort->len_b);
		while (i > 0)
		{
			stack_b[i] = stack_b[i - 1];
			i--;
		}
		stack_b[0] = stack_a[0];
		i = 0;
		while (i < *(sort->len_a) - 1)
		{
			stack_a[i] = stack_a[i + 1];
			i++;
		}
		stack_a[*(sort->len_a) - 1] = 0;
		--*(sort->len_a);
		++*(sort->len_b);
		write (1, "pb\n", 3);
	}
}
