#include <stdio.h>

int	find_smallest_diff(int *array, int *stack_len_b)
{
	int	i;
	int	min_index;

	i = 0;
	min_index = 0;
	while (i < *stack_len_b)
	{
		if (array[i] < array[min_index] && array[i] >= 0)
		{
			min_index = i;
		}
		if (array[i] < 0)
		{
			array[i] = array[i] * -1;
			if (array[i] < array[min_index])
				min_index = i;
		}
		i++;
	}
	return (min_index);
}

int	find_spot_in_b(int number, int *stack_len_b, int *stack_b)
{
	int	array[10000];
	int	checker_array[10000];
	int	i;
	int	result;

	i = -1;
	while (++i < *stack_len_b)
		array[i] = stack_b[i];
	i = -1;
	while (++i < *stack_len_b)
		checker_array[i] = stack_b[i] - number;
	result = find_smallest_diff(checker_array, stack_len_b);
	if (result < array[result])
	{
		printf("result is kleiner\n");
		return (result);
	}
	else
	{
		printf("result is groesser\n");
		return (result);
	}
	return (result);
}

// #include <stdio.h>

// int	find_spot_in_b(int number, int *stack_len_b, int *stack_b)
// {
// 	int	i;

// 	i = 0;
// 	while (i < *stack_len_b)
// 	{
// 		if (stack_b[i] < number)
// 			return (i);
// 		i++;
// 	}
// 	return (i);
// }

// int main()
// {
// 	int stack_b[] = {500, 400, 300, 200, 100};
// 	int stack_len_b = sizeof(stack_b) / sizeof(stack_b[0]);
// 	int number = 350;

// 	int spot = find_spot_in_b(number, &stack_len_b, stack_b);

// 	printf("The spot for %d in stack_b is: %d\n", number, spot);

// 	return 0;
// }

int main()
{
	int stack_b[] = {382, 289, 389};
	int stack_len_b = sizeof(stack_b) / sizeof(stack_b[0]);
	int number = 578;

	int spot = find_spot_in_b(number, &stack_len_b, stack_b);

	printf("The spot for %d in stack_b is: %d\n", number, spot);

	return 0;
}