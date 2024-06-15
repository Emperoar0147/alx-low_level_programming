#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1, prev = 0;

    if (array == NULL)
        return (-1);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        prev = bound;
        bound *= 2;
    }

    if (bound >= size)
        bound = size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", prev, bound);
    printf("Searching in array: ");
    print_array(array, prev, bound);

    return binary_search(array, size, value, prev, bound);
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm within a specific range.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * @start: The start index of the range.
 * @end: The end index of the range.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 */
int binary_search(int *array, size_t size, int value, size_t start, size_t end)
{
    size_t left = start, right = end, mid;

    while (left <= right)
    {
        mid = (left + right) / 2;

        printf("Searching in array: ");
        print_array(array, left, right);

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}

/**
 * print_array - Prints the elements of an array within the given range.
 * @array: A pointer to the first element of the array.
 * @start: The index to start printing from.
 * @end: The index to stop printing at.
 */
void print_array(int *array, size_t start, size_t end)
{
    size_t i;

    for (i = start; i < end; i++)
        printf("%d, ", array[i]);
    printf("%d\n", array[i]);
}
