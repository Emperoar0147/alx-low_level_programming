#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_step, prev, i;

	if (array == NULL || size == 0)
	return (-1);

	jump_step = sqrt(size);
	prev = 0;

	while (array[prev] < value)
	{
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	if (prev + jump_step >= size || array[prev + jump_step] >= value)
		break;
	prev += jump_step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + jump_step);

	for (i = prev; i < size && i <= prev + jump_step; i++)
	{
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return (i);
	}

	return (-1);
}

