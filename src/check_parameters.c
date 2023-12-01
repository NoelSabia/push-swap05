/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parameters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:10:36 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/01 11:54:27 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_parameters(int argc, char *argv[], int *stack_a, int *stack_b)
{
	int				i;
	long long int	value;

	i = 1;
	while (i < argc)
	{
		value = ft_strtoll(argv[i], 10);
		if (ft_isalpha(argv[i][0]) == 1 || is_special_sign(argv[i][0]) == 1
				|| (value > INT_MAX || value < INT_MIN))
		{
			write (1, "Error\n", 7);
			free (stack_a);
			free (stack_b);
			exit(0);
		}
		i++;
	}
	if (i < 2)
		errors(stack_a, stack_b);
	check_duplicates(argv, stack_a, stack_b);
	check_parameters_stack_a(stack_a, stack_b);
}

void	check_duplicates(char *argv[], int *stack_a, int *stack_b)
{
	int	i;
	int	j;
	int	value_a;
	int	value_b;

	i = 1;
	while (argv[i] != NULL)
	{
		j = i + 1;
		value_a = ft_atoi(argv[i]);
		while (argv[j] != NULL)
		{
			value_b = ft_atoi(argv[j]);
			if (value_a == value_b)
			{
				write (1, "Error\n", 7);
				free (stack_a);
				free(stack_b);
				exit(0);
			}
			else
				j++;
		}
		i++;
	}
}

int	safe_atoi(char *str, int *stack_a, int *stack_b)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		if ((sign == 1 && num > INT_MAX) || (sign == (-1) && (-num) < INT_MIN))
		{
			write(1, "Error\n", 7);
			free (stack_a);
			free (stack_b);
			exit(0);
		}
		str++;
	}
	return ((int)num * sign);
}

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

long long int	ft_strtoll(const char *nptr, int base)
{
	long long int	result;
	int				i;
	int				vorzeichen;

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
		result *= base;
		i++;
	}
	result /= base;
	return (result * vorzeichen);
}
