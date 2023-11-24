/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_in_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:51:41 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/24 13:34:22 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*push_in_stack(int *stack_size, char *argv[], int *stack_a, int *stack_b)
{
	int	i;
	int	j;
	int	value;

	i = 1;
	j = 0;
	while (argv[i] != NULL)
	{
		if (ft_strlen(argv[i]) > 1 && ft_strchr_int(argv[i], 32) == 1)
			j = string_in_stack(argv[i], stack_a, stack_b, j);
		else
		{
			value = safe_atoi(argv[i], stack_a, stack_b);
			stack_a[j] = value;
			j++;
		}
		i++;
	}
	check_if_only_numbers(stack_a, stack_b, j);
	*stack_size = j;
	return (stack_a);
}

int	string_in_stack(char *argv, int *stack_a, int *stack_b, int i)
{
	int	j;
	int	value;

	j = 0;
	while (argv[j] != '\0')
	{
		if (argv[j] >= '0' && argv[j] <= '9')
		{
			value = safe_atoi(&argv[j], stack_a, stack_b);
			stack_a[i] = value;
			i++;
			while (argv[j] >= '0' && argv[j] <= '9')
				j++;
		}
		else if (!(argv[j] >= '0' && argv[j] <= '9') && !(argv[j] == 32))
		{
			write (1, "Error\n", 7);
			free (stack_a);
			free (stack_b);
			exit(0);
		}
		else
			j++;
	}
	return (i);
}

void	check_if_only_numbers(int *stack_a, int *stack_b, int j)
{
	int	i;

	i = 0;
	while (i <= j)
	{
		if ((stack_a[i] >= INT_MIN && stack_a[i] <= INT_MAX))
		{
			i++;
			continue ;
		}
		else
		{
			write (1, "Error\n", 7);
			free (stack_a);
			free (stack_b);
			exit(0);
		}
	}
}

int	ft_strchr_int(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (1);
		i++;
	}
	if ((char)c == '\0')
	{
		return (0);
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
