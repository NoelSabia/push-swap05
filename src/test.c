// void	find_cheapest_move(int *stack_a, int *stack_b, int *stack_len_a, int *stack_len_b)
// {
// 	int	i;
// 	int	j;
// 	int	counter;
// 	int	costs[10000];
// 	int	*stack_a_clone;
// 	int	*stack_b_clone;

// 	i = 0;
// 	j = *stack_len_a;
// 	while (i < *stack_len_a)
// 	{
// 		counter = 0;
// 		stack_a_clone = malloc(*stack_len_a * sizeof(int));
// 		stack_b_clone = malloc(*stack_len_b * sizeof(int));
// 		ft_memcpy(stack_a_clone, stack_a, *stack_len_a * sizeof(int));
// 		ft_memcpy(stack_b_clone, stack_b, *stack_len_b * sizeof(int));
// 		if (i <= *stack_len_a / 2)
// 		{
// 			int mid = *stack_len_a / 2;
// 			while (stack_a[0] < mid)
// 			{
// 				counter = counter + pseudo_ra(stack_a, *stack_len_a, counter);
// 			}
// 			counter += find_spot_in_b(stack_a[i], stack_b, &counter, *stack_len_b);
// 		}
// 		else
// 		{
// 			if (stack_a[i] != stack_a[0])
// 				counter = counter + pseudo_rra(stack_a, *stack_len_a, counter);
// 			counter += find_spot_in_b(stack_a[i], stack_b, &counter, *stack_len_b);
// 		}
// 		i++;
// 		costs[j] = counter;
// 		printf("The cost is: %d\n", costs[j]);
// 		j++;
// 	}
// 	free (stack_a_clone);
// 	free (stack_b_clone);
// }

#include "../includes/push_swap.h"

int	find_spot_in_b(int number, int *stack_a, int *stack_b, int counter)
{
	int	i;
	int len_b;

	len_b = 0;
	while (stack_b[len_b] != '\0')
		len_b++;
	i = 0;
	while (number < stack_b[0])
	{
		pseudo_rb(stack_b, len_b, counter);
		printf("The number is: %d\n", stack_b[0]);
		counter++;
		i++;
	}
	int pop_from_a = 1;
	pseudo_pb(stack_a, len_b, stack_b, len_b, pop_from_a, counter);
	counter++;
	return (counter);
}

#include <stdio.h>

// Include your function definitions here

int main()
{
	int stack_a[] = {45};
	int stack_b[] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10, '\0'};
	int number = 45;
	int counter = 0;

	counter = find_spot_in_b(number, stack_a, stack_b, counter);

	printf("Counter after find_spot_in_b: %d\n", counter);

	return 0;
}
