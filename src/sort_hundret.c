/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundret.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:52:53 by noel              #+#    #+#             */
/*   Updated: 2024/01/05 16:13:57 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	sort_hundret(t_sort *sort, int *stack_a, int *stack_b)
{
	int	key_nbr;

	key_nbr = *(sort->len_a) / 4;
	
}

// wir dividieren stack_a in vier chunks (indem wir stack_a sortieren in stack_k)
// wir machen das mit key_nbr, alle kleiner zahlen werden damit rubergepusht
// nachdem stack_a leer ist wird mit dem groessten stack angefangen