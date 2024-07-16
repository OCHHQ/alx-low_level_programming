#include <stdio.h>
#include "search_algos.h"

/**
 * print_subarray - Prints the elements of a subarray within a given range.
 * @array: The array to be printed.
 * @low: The starting index.
 * @high: The ending index.
 */
void print_subarray(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * advanced_binary_rec - Recursively searches for a value in a sorted array.
 * @array: Pointer to the first element of the array to search in.
 * @low: The starting index.
 * @high: The ending index.
 * @value: The value to search for.
 *
 * Return: The index of the found value, else -1.
 */
int advanced_binary_rec(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);

	print_subarray(array, low, high);
	mid = low + (high - low) / 2;

	if (array[mid] == value && (mid == low || array[mid - 1] != value))
		return (mid);

	if (array[mid] >= value)
		return (advanced_binary_rec(array, low, mid, value));
	return (advanced_binary_rec(array, mid + 1, high, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the found value, else -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_rec(array, 0, size - 1, value));
}
