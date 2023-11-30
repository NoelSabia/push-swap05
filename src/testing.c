#include "../includes/push_swap.h"

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
	int number = 4;
	int stack_b[] = {100, 30, 20, 19, 1};
	int stack_len_b = sizeof(stack_b) / sizeof(stack_b[0]);
	int counter = find_spot_in_b(number, &stack_len_b, stack_b);
	printf("counter: %d\n", counter);
	return (0);
}
