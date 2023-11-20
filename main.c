/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:45:51 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/20 13:42:44 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	*stack_a;
	int	*stack_b;
	int	stack_len;

	stack_len = sizeof(*argv) / sizeof(int);
	stack_a = (int *)malloc(stack_len);
	stack_b = (int *)malloc(stack_len);
	check_parameters(argc, argv, stack_a, stack_b);
	free (stack_a);
	free (stack_b);
	return (0);
}
