#include "../includes/push_swap.h"

int	find_cheapest_move(int *stack_a, int *stack_b, int *stack_len_a, int *stack_len_b)
{
	int	i;
	int	j;
	int	counter;
	int	costs[10000];
	int	*stack_a_clone;
	int	*stack_b_clone;
	int	number;

	i = 0;
	j = 0;
	while (j < *stack_len_a)
	{
		counter = 0;
		number = stack_a[i];
		stack_a_clone = malloc(*stack_len_a * sizeof(int));
		stack_b_clone = malloc(*stack_len_b * sizeof(int));
		ft_memcpy(stack_a_clone, stack_a, *stack_len_a * sizeof(int));
		ft_memcpy(stack_b_clone, stack_b, *stack_len_b * sizeof(int));
		if (i < *stack_len_a / 2)
		{
			while (stack_a_clone[0] != number)
			{
				pseudo_ra(stack_a_clone, *stack_len_a, counter);
				counter++;
			}
			counter += find_spot_in_b(stack_a_clone[0], stack_len_b, stack_b_clone);
		}
		else
		{
			while (stack_a_clone[0] != number)
			{
				pseudo_rra(stack_a_clone, *stack_len_a, counter);
				counter++;
			}
			counter += find_spot_in_b(stack_a_clone[0], stack_len_b, stack_b_clone);
		}
		costs[j] = counter;
		printf("The cost is: %d\n", costs[j]);
		i++;
		j++;
		free (stack_a_clone);
		free (stack_b_clone);
	}
	j = 0;
	int min_cost = costs[0];
	int min_index = 0;
	while (j < *stack_len_a)
	{
		if (costs[j] < min_cost)
		{
			min_cost = costs[j];
			min_index = j;
		}
		j++;
	}
	return (min_index);
}

int	find_spot_in_b(int number, int *stack_len_b, int *stack_b)
{
	int	len_b;
	int	counter;

	len_b = *stack_len_b;
	counter = 0;
	while (number < stack_b[0])
	{
		pseudo_rb(stack_b, len_b, counter);
		counter++;
	}
	pseudo_pb(number, stack_len_b, stack_b);
	counter++;
	return (counter);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*a;
	const char	*b;
	size_t		i;

	a = dst;
	b = src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}

int	pseudo_ra(int *stack_a, int stack_len_a, int counter)
{
	int	i;
	int	temp;

	i = 0;
	if (stack_len_a > 0)
	{
		temp = stack_a[0];
		while (i < stack_len_a - 1)
		{
			stack_a[i] = stack_a[i + 1];
			i++;
		}
		stack_a[stack_len_a - 1] = temp;
	}
	counter++;
	return (counter);
}

int	pseudo_rra(int *stack_a, int stack_len_a, int counter)
{
	int	i;
	int	temp;

	if (stack_len_a > 0)
	{
		temp = stack_a[stack_len_a - 1];
		i = stack_len_a - 1;
		while (i > 0)
		{
			stack_a[i] = stack_a[i - 1];
			i--;
		}
		stack_a[0] = temp;
	}
	counter++;
	return (counter);
}

int	pseudo_pb(int number, int *stack_len_b, int *stack_b)
{
	int	i;
	int	counter;

	counter = 0;
	(*stack_len_b)++;
	i = *stack_len_b;
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = number;
	counter++;
	return (counter);
}

int	pseudo_rb(int *stack_b, int len_b, int counter)
{
	int	i;
	int	temp;

	i = 0;
	if (len_b > 0)
	{
		temp = stack_b[0];
		while (i < len_b - 1)
		{
			stack_b[i] = stack_b[i + 1];
			i++;
		}
		stack_b[len_b - 1] = temp;
	}
	counter++;
	return (counter);
}

#include <stdio.h>
#include "../includes/push_swap.h"

int main()
{
	int stack_a[] = {21, 9, 17, 19, 28, 25, 3, 230, 1};
	int stack_b[] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10, 0, '\0'};
	int stack_len_a = sizeof(stack_a) / sizeof(stack_a[0]);
	int stack_len_b = 10;
	int counter = find_cheapest_move(stack_a, stack_b, &stack_len_a, &stack_len_b);
	for (int i = 0; i < 21; i++)
		printf("%d\n", stack_b[i]);
	printf("The counter is: %d\n", counter);
}
