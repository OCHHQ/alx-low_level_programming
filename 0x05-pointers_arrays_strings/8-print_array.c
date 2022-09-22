#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of an integers
 * @a: point of an array.
 * @b: number of the array elements.
 *
 * Return: void .
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}

