/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parameters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:10:36 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/20 18:50:36 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_parameters(int argc, char *argv[], int *stack_a, int *stack_b)
{
	int				i;
	char			*endptr;
	long long int	value;

	i = 1;
	while (i < argc)
	{
		value = strtoll(argv[i], &endptr, 10);
		if (ft_isalpha(argv[i][0]) == 1
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
	{
		write (1, "Error\n", 7);
		free (stack_a);
		free (stack_b);
		exit(0);
	}
	check_duplicates(argc, argv, stack_a, stack_b);
}

void	check_duplicates(int argc, char *argv[], int *stack_a, int *stack_b)
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

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

long long int	ft_strtoll(const char *nptr, char **endptr, int base)
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
