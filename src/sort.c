/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:17:10 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/29 19:17:13 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort(int *stack_a, int *stack_b, int *stack_len_a, int *stack_len_b)
{
	int	len;

	len = *stack_len_a;
	pb(stack_a, stack_b, stack_len_a, stack_len_b);
	pb(stack_a, stack_b, stack_len_a, stack_len_b);
	if (is_sorted_backwards(*stack_len_b, stack_b) == 0)
		sa(stack_b);
	while (len > 3)
	{
		find_cheapest_move(stack_a, stack_b, stack_len_a, stack_len_b);
		len--;
	}
	tiny_sort(stack_a, *stack_len_a);
}

void	find_cheapest_move(int *stack_a, int *stack_b, int *stack_len_a, int *stack_len_b)
{
	int	i;
	int	j;
	int	counter;
	int	costs[10000];
	int	*stack_a_clone;
	int	*stack_b_clone;

	i = 0;
	j = *stack_len_a;
	while (i < *stack_len_a)
	{
		counter = 0;
		stack_a_clone = malloc(*stack_len_a * sizeof(int));
		stack_b_clone = malloc(*stack_len_b * sizeof(int));
		ft_memcpy(stack_a_clone, stack_a, *stack_len_a * sizeof(int));
		ft_memcpy(stack_b_clone, stack_b, *stack_len_b * sizeof(int));
		if (i <= *stack_len_a / 2)
		{
			int mid = *stack_len_a / 2;
			while (stack_a[0] < mid)
			{
				counter = counter + pseudo_ra(stack_a, *stack_len_a, counter);
			}
			counter += find_spot_in_b(stack_a[i], stack_b, &counter, *stack_len_b);
		}
		else
		{
			if (stack_a[i] != stack_a[0])
				counter = counter + pseudo_rra(stack_a, *stack_len_a, counter);
			counter += find_spot_in_b(stack_a[i], stack_b, &counter, *stack_len_b);
		}
		i++;
		costs[j] = counter;
		printf("The cost is: %d\n", costs[j]);
		j++;
	}
	free (stack_a_clone);
	free (stack_b_clone);
}

int	find_spot_in_b(int number, int *stack_a, int *stack_b, int counter)
{
	int	i;
	int len_b;

	len_b = 0;
	while (stack_b[len_b] != '\0')
		len_b++;
	i = 0;
	while (i < len_b && number < stack_b[i])
	{
		counter += pseudo_rb(stack_b, len_b, counter);
		i++;
	}
	int pop_from_a = 1;
	counter = pseudo_pb(stack_a, len_b, stack_b, len_b, pop_from_a, counter);
	counter++;
	return (counter);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*a;
	const char	*b;
	size_t		i;

	a = dst;
	b = src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
