/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helper2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:40:11 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/07 16:44:13 by nsabia           ###   ########.fr       */
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

int	find_spot_in_b(int number, int *stack_len_b, int *stack_b)
{
	int	len_b;
	int	i;

	len_b = *stack_len_b;
	i = 1;
	while (i < len_b)
	{
		if (number < stack_b[i - 1] && number > stack_b[i])
			return (i);
		i++;
	}
	return (len_b);
}
