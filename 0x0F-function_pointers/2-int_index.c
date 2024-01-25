#include "function_pointers.h"
/**
 * int_index - search for integer
 * @array: target array int
 * @size: arry size
 * @cmp: function to compare search
 *
 * Return: int elemet match, -1 (*cmp)(int)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
