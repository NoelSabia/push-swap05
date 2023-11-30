/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:17:10 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/30 16:46:54 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort(int *stack_a, int *stack_b, int *stack_len_a, int *stack_len_b)
{
	int	len;
	int	executable;

	len = *stack_len_a;
	pb(stack_a, stack_b, stack_len_a, stack_len_b);
	pb(stack_a, stack_b, stack_len_a, stack_len_b);
	if (is_sorted_backwards(*stack_len_b, stack_b) == 0)
		sa(stack_b);
	while (len > 3)
	{
		executable = find_cheapest_move(stack_a, stack_b,
				stack_len_a, stack_len_b);
		execute_cheapest(executable, stack_a);
		len--;
	}
	tiny_sort(stack_a, *stack_len_a);
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
