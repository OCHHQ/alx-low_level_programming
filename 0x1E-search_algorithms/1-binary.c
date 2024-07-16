#include "search_algos.h"

/**
 * print_array - Prints an array of integers.
 * @array: The array to be printed.
 * @low: The starting index of the array.
 * @high: The ending index of the array.
 */
void print_array(int *array, size_t low, size_t high)
{
    size_t i;

    printf("Searching in array: ");
    for (i = low; i <= high; i++)
    {
        printf("%d", array[i]);
        if (i < high)
            printf(", ");
    }
    printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers using binary search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where the value is located, or -1 if the value is not present or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t low, mid, high;

    if (array == NULL)
        return (-1);

    low = 0;
    high = size - 1;

    while (low <= high)
    {
        print_array(array, low, high);
        mid = (low + high) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return (-1);
}
