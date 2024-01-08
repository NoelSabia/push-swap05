/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:00:56 by nsabia            #+#    #+#             */
/*   Updated: 2024/01/08 11:45:59 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void rb(int *stack_b, t_sort *sort)
{
    int i;
	int	m;
    int temp;

    temp = stack_b[0];
    i = *(sort->len_b) - 1;
	m = 0;
    while (i >=  0)
    {
        stack_b[m] = stack_b[m + 1];
        i--;
		m++;
    }
	m--;
    stack_b[m] = temp;
    write(1, "rb\n", 4);
}

void	rrb(int *stack_b, t_sort *sort)
{
	int	i;
	int	temp;

	temp = stack_b[*(sort->len_b) - 1];
	i = *(sort->len_b) - 1;
	while (i >= 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = temp;
	write (1, "rrb\n", 5);
}

void	sb(int *stack_b, int stack_size)
{
	int	temp;

	if (stack_size >= 2)
	{
		temp = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp;
		write (1, "sb\n", 4);
	}
}
