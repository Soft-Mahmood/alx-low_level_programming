#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in the array
 * @value: value searched for.
 * Return: first index where value is located.
 * Return -1 if value is not present or if array is null
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; (i < size) && (array); i++)
	{
		if (*(array + i) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		}
	}
	return (-1);
}
