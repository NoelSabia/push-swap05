/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_in_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:51:41 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/22 16:57:01 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*push_in_stack(int argc, char *argv[], int *stack_a)
{
	int	i;
	int	value;

	i = 1;
	while (i < argc)
	{
		if (ft_strlen(argv[i]) > 1)
		{
			string_in_stack(argv[i], stack_a);
		}
		else
		{
			value = ft_atoi(argv[i]);
			stack_a[i - 1] = value;
		}
		i++;
	}
	stack_a[argc - 1] = '\0';
	return (stack_a);
}

int	*string_in_stack(char *argv, int *stack_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stack_a[i] != '\0')
		i++;
	while (argv[j] != '\0')
	{
		// printf("%c", argv[j]);
		if (argv[j] >= '0' && argv[j] <= '9') //kommt anscheinend gar nicht hier rein
		{
			// printf("%c", argv[j]);
			stack_a[i] = ft_atoi(&argv[j]);
			i++;
		}
		else
			j++;
	}
	return (stack_a);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int *stack_a;
	int i;

	// Speicher für stack_a reservieren
	stack_a = (int *)malloc((argc - 1) * sizeof(int));
	if (stack_a == NULL)
	{
		fprintf(stderr, "Fehler bei der Speicherreservierung\n");
		return 1;
	}

	// Argumente in stack_a füllen
	stack_a = push_in_stack(argc, argv, stack_a);

	// Werte in stack_a ausgeben
	for (i = 0; i < argc - 1; i++)
	{
		printf("%d ", stack_a[i]);
	}
	printf("\n");

	// Speicher freigeben
	free(stack_a);

	return 0;
}
