/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_in_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:51:41 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/23 15:40:47 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*push_in_stack(int argc, char *argv[], int *stack_a, int *stack_b)
{
	int	i;
	int	j;
	int	value;

	i = 1;
	j = 0;
	while (i < argc)
	{
		if (ft_strlen(argv[i]) > 1 && ft_strchr_int(argv[i], 32) == 1)
			j = string_in_stack(argv[i], stack_a, stack_b, j);
		else
		{
			value = ft_atoi(argv[i]);
			stack_a[j] = value;
			j++;
		}
		i++;
	}
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
			value = ft_atoi(&argv[j]);
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
