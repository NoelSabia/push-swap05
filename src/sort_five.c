/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 20:06:08 by noel              #+#    #+#             */
/*   Updated: 2023/12/30 17:23:35 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_five(int *stack_a, int *stack_b, t_sort *sort)
{
	int	i;

	pb(stack_a, stack_b, sort);
	pb(stack_a, stack_b, sort);
	tiny_sort(stack_a, sort);
	// while (stack_b[*(sort->len_b)] > 0)
	// {
	i = find_corr_spot(sort, stack_a, stack_b);
	printf("i: %d\n", i);
		// if (i < *(sort->len_b) / 2)
		// {
		// 	while ()
		// }
		// else
		// {
		// 	while ()
		// }
		// pa(stack_a, stack_b, sort);
	// }
}

int	find_corr_spot(t_sort *sort, int *stack_a, int *stack_b)
{
	int	s[500];
	int	i;
	int	result;

	i = -1;
	// printf("len: %d\n", *(sort->len_b));
	while (++i <= *(sort->len_b)) // geht nicht in while loop deswegen komische werte von vorhin
		s[i] = stack_a[i] - stack_b[0];
	// for (int k = 0; k < 3; k++)
	// 	printf("s: %d\n", s[k]);
	// printf("\n");
	result = find_nearest(s, i);
	// printf("result: %d\n", result);
	i = 0;
	while (s[i] != result)
		i++;
	return (i);
}

int find_nearest(int arr[500], int len)
{
    int i;
    int result;
    int minDifference;
	int	difference;
	int	update;

	result = arr[0];
	i = -1;
	minDifference = (result >= 0) * result + (result < 0) * (-result);
    while (++i < len)
    {
        difference = (arr[i] >= 0) * arr[i] + (arr[i] < 0) * (-arr[i]);
        update = difference < minDifference;
        minDifference = update * difference + (1 - update) * minDifference;
        result = update * arr[i] + (1 - update) * result;
    }
    return (result);
}
