#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                    using the advanced binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    return advanced_binary_rec(array, 0, size - 1, value);
}

/**
 * advanced_binary_rec - Recursively searches for a value in a sorted array
 *                       of integers using the advanced binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @start: The start index of the subarray to search in.
 * @end: The end index of the subarray to search in.
 * @value: The value to search for.
 *
 * Return: If the value is not present, -1.
 *         Otherwise, the index where the value is located.
 */
int advanced_binary_rec(int *array, size_t start, size_t end, int value)
{
    size_t mid, i;

    if (start > end)
        return (-1);

    printf("Searching in array: ");
    for (i = start; i < end; i++)
        printf("%d, ", array[i]);
    printf("%d\n", array[i]);

    mid = (start + end) / 2;

    if (array[mid] == value)
    {
        if (mid == 0 || array[mid - 1] != value)
            return (mid);
        return advanced_binary_rec(array, start, mid, value);
    }
    else if (array[mid] < value)
        return advanced_binary_rec(array, mid + 1, end, value);
    else
        return advanced_binary_rec(array, start, mid, value);
}
