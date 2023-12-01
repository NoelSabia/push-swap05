/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parameters_helper2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:53:01 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/01 11:54:40 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	errors(int *stack_a, int *stack_b)
{
	write (1, "Error\n", 7);
	free (stack_a);
	free (stack_b);
	exit(0);
}
