/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:17:10 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/06 16:42:07 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	execute_cheapest(int executable, int *stack_a, int *stack_len_a)
{
	int	number;

	number = stack_a[executable];
	while (stack_a[0] != number)
	{
		if (executable < *stack_len_a / 2)
			ra(stack_a, *stack_len_a);
		else
			rra(stack_a, *stack_len_a);
	}
}

void	do_exception(int *stack_a, int *stack_b,
			int *stack_len_a, int *stack_len_b)
{
	pb(stack_a, stack_b, stack_len_a, stack_len_b);
	rb(stack_b, *stack_len_b);
}

// void	sort(int *s_a, int *s_b, int *stack_len_a, int *stack_len_b)
// {
// 	int	len;
// 	int	len_safety;
// 	int	executable;

// 	len = *stack_len_a - 2;
// 	len_safety = len;
// 	pb(s_a, s_b, stack_len_a, stack_len_b);
// 	pb(s_a, s_b, stack_len_a, stack_len_b);
// 	if (is_sorted_backwards(*stack_len_b, s_b) == 0)
// 	{
// 		sa(s_b);
// 		len_safety--;
// 	}
// 	while (len_safety >= 3)
// 	{
// 		executable = find_cheapest_move(s_a, s_b, stack_len_a, stack_len_b);
// 		execute_cheapest(executable, s_a, stack_len_a);
// 		if (find_spot_in_b(executable, stack_len_b, s_b) == 1)
// 			pb(s_a, s_b, stack_len_a, stack_len_a);
// 		else
// 			do_exception(s_a, s_b, stack_len_a, stack_len_b);
// 		len_safety--;
// 	}
// 	tiny_sort(s_a, *stack_len_a);
// }

void	sort(int *s_a, int *s_b, int *stack_len_a, int *stack_len_b)
{
	int	len;
	int	len_safety;
	int	executable;

	len = *stack_len_a - 2;
	len_safety = len;
	pb(s_a, s_b, stack_len_a, stack_len_b);
	pb(s_a, s_b, stack_len_a, stack_len_b);
	if (is_sorted_backwards(*stack_len_b, s_b) == 0)
	{
		sa(s_b);
		len_safety--;
	}
	while (len_safety > 3)
	{
		executable = find_cheapest_move(s_a, s_b, stack_len_a, stack_len_b);
		execute_cheapest(executable, s_a, stack_len_a);
		if (find_spot_in_b(executable, stack_len_b, s_b) == 1)
			pb(s_a, s_b, stack_len_a, stack_len_b);
		else
			do_exception(s_a, s_b, stack_len_a, stack_len_b);
		len_safety--;

		printf("stack_a: ");
		for (int i = 0; i < *stack_len_a; i++) {
			printf("%d ", s_a[i]);
		}
		printf("\n");

		printf("stack_b: ");
		for (int i = 0; i < *stack_len_b; i++) {
			printf("%d ", s_b[i]);
		}
		printf("\n");
	}
	tiny_sort(s_a, *stack_len_a);
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

int	find_spot_in_b(int number, int *stack_len_b, int *stack_b)
{
	int	len_b;
	int	i;

	len_b = *stack_len_b;
	i = 0;
	while (number < stack_b[0])
	{
		rb(stack_b, *stack_len_b);
		i++;
		if (i == len_b)
			return (0);
	}
	return (1);
}
