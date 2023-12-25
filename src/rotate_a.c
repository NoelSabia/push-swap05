/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:00:44 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/25 17:37:08 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ra(int *stack_a, t_sort *sort)
{
    int i;
	int	m;
    int temp;

    temp = stack_a[0];
    i = *(sort->len_a) - 1;
	m = 0;
    while (i >=  0)
    {
        stack_a[m] = stack_a[m + 1];
        i--;
		m++;
    }
	m--;
    stack_a[m] = temp;
    write(1, "ra\n", 4);
}

void	rra(int *stack_a, t_sort *sort)
{
	int	i;
	int	temp;

	temp = stack_a[*(sort->len_a) - 1];
	i = *(sort->len_a) - 1;
	while (i >= 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = temp;
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
