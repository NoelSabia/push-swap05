/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:17:10 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/01 13:14:59 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	execute_cheapest(int executable, int *stack_a)
{

}

void	do_exception(void)
{

}

void	sort(int *stack_a, int *stack_b, int *stack_len_a, int *stack_len_b)
{
	int	len;
	int	len_safety;
	int	executable;

	len = *stack_len_a;
	len_safety = len;
	pb(stack_a, stack_b, stack_len_a, stack_len_b);
	pb(stack_a, stack_b, stack_len_a, stack_len_b);
	if (is_sorted_backwards(*stack_len_b, stack_b) == 0)
		sa(stack_b);
	while (len_safety > 3)
	{
		executable = find_cheapest_move(stack_a, stack_b,
				stack_len_a, stack_len_b);
		printf("executable: %d\n", executable);
			execute_cheapest(executable, stack_a);
		len_safety--;
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
