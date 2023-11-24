/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:42:42 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/24 14:39:01 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sorted(int stack_size, int *stack_a)
{
	int	i;

	i = 0;
	while (i < stack_size)
	{
		if (stack_a[i] < stack_a[i - 1])
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char *argv[])
// {
// 	int *stack = (int *)malloc((argc - 1) * sizeof(int));
// 	int i;

// 	for (i = 1; i < argc; i++)
// 	{
// 		stack[i - 1] = atoi(argv[i]);
// 	}

// 	if (is_sorted(argc - 1, stack))
// 	{
// 		printf("The array is sorted.\n");
// 	}
// 	else
// 	{
// 		printf("The array is not sorted.\n");
// 	}

// 	free(stack);
// 	return 0;
// }