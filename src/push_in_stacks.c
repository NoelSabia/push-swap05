/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_in_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:51:41 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/23 11:25:47 by nsabia           ###   ########.fr       */
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
			printf("2 or more values\n");
			string_in_stack(argv[i], stack_a);
		}
		else
		{
			value = ft_atoi(argv[i]);
			stack_a[i - 1] = value;
			printf("Normal value\n");
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
	int	value;

	i = 0;
	j = 0;
	while (stack_a[i] != '\0')
		i++;
	while (argv[j] != '\0')
	{
		if (argv[j] >= '0' && argv[j] <= '9')
		{
			value = ft_atoi(&argv[j]);
			stack_a[i - 1] = value;
			printf("int : %d\n", stack_a[i - 1]);
			i++;
			while (argv[j] >= '0' && argv[j] <= '9')
				j++;
		}
		else
		{
			printf("empty space\n");
			j++;
		}
	}
	return (stack_a);
}

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

// int	ft_atoi(const char *nptr)
// {
// 	long	result;
// 	int		i;
// 	int		vorzeichen;

// 	result = 0;
// 	i = 0;
// 	vorzeichen = 1;
// 	while (nptr[i] == '\t' || nptr[i] == '\v' || nptr[i] == '\n'
// 		|| nptr[i] == '\r' || nptr[i] == '\f' || nptr[i] == 32)
// 		i++;
// 	if (nptr[i] == '+')
// 		i++;
// 	else if (nptr[i] == '-')
// 	{
// 		vorzeichen *= -1;
// 		i++;
// 	}
// 	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i] != 0)
// 	{
// 		result += nptr[i] - '0';
// 		result *= 10;
// 		i++;
// 	}
// 	result /= 10;
// 	return ((int)result * vorzeichen);
// }

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
	// stack_a = push_in_stack(3, (char *[]){"./Programm", "1", "3", "4 5"}, stack_a);
	
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
