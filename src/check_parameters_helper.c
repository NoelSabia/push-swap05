/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parameters_helper.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:26:51 by nsabia            #+#    #+#             */
/*   Updated: 2024/01/08 14:03:51 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_parameters_stack_a(int *stack_a, int *stack_b)
{
	int	i;

	i = 0;
	while (stack_a[i] != '\0')
	{
		if (stack_a[i] > INT_MAX || stack_a[i] < INT_MIN)
		{
			free (stack_a);
			free (stack_b);
			exit(0);
		}
		i++;
	}
	check_duplicates_stack_a(stack_a, stack_b);
}

void	check_duplicates_stack_a(int *stack_a, int *stack_b)
{
	int	i;
	int	j;
	int	value_a;
	int	value_b;

	i = 0;
	while (stack_a[i] != '\0')
	{
		j = i + 1;
		value_a = stack_a[i];
		while (stack_a[j] != '\0')
		{
			value_b = stack_a[j];
			if (value_a == value_b)
			{
				write (1, "Error\n", 7);
				free (stack_a);
				free (stack_b);
				exit(0);
			}
			j++;
		}
		i++;
	}
}

int	ft_atoi(const char *nptr)
{
	long	result;
	int		i;
	int		vorzeichen;

	result = 0;
	i = 0;
	vorzeichen = 1;
	while (nptr[i] == '\t' || nptr[i] == '\v' || nptr[i] == '\n'
		|| nptr[i] == '\r' || nptr[i] == '\f' || nptr[i] == 32)
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		vorzeichen *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i] != 0)
	{
		result += nptr[i] - '0';
		result *= 10;
		i++;
	}
	result /= 10;
	return ((int)result * vorzeichen);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	is_special_sign(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]) && str[i] != '-')
			return (1);
		i++;
	}
	return (0);
}
