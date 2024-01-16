#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array 
 * @array: pointer to the first element in the array
 * @size: number of elements in the array.
 * @value: value to search for.
 * Return: index where the value is located.
 * Return -1 if array is null or value is absent
 *
 * Assume: array will be sorted in ascending order.
 * Assume: value wont appear more than once.
 */

int binary_search(int *array, size_t size, int value)
{
	int left, right, middle, i;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size -1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i<= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		middle = (left + right) / 2;
		if (array[middle] <value)
			right = middle - 1;

		else if (array[middle] < value)
			left = middle + 1;

		else
			return (middle);

	}
	return (-1);
}
