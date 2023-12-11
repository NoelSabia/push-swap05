/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helper2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:40:11 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/11 19:41:25 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

// int	find_spot_in_b(int number, int *stack_len_b, int *stack_b)
// {
// 	int	len_b;
// 	int	i;

// 	len_b = *stack_len_b;
// 	i = 1;
// 	while (i < len_b)
// 	{
// 		if (number < stack_b[i - 1] && number > stack_b[i])
// 			return (i);
// 		i++;
// 	}
// 	if (number < stack_b[len_b - 1])
// 		return (len_b);
// 	return (0);
// }

int	find_spot_in_b(int number, int *stack_len_b, int *stack_b)
{
	
}

// the problem seems to be different.
// It will execute rbb or rb until you spot > 0 is false. 
// It cannot find a good place in the stack for that case
// and than just pushes it. So what i want to do is not only to 
// check if number is smaller than stack_b[0] but insted 
// ALSO check if stack_b[*stack_len_b] is bigger 
// than the number i want to push

//Taskverse