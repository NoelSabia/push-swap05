/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_in_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:51:41 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/21 11:27:15 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*push_in_stack(int argc, char *argv[], int *stack_a)
{
	int	i;
	int	value;

	i = 1;
	while (i < argc)
	{
		value = ft_atoi(argv[i]);
		stack_a[i - 1] = value;
		i++;
	}
	stack_a[argc - 1] = '\0';
	return (stack_a);
}
