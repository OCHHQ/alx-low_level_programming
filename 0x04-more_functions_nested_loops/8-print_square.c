#include <stdio.h>
#include "main.h"

/**
 * print_square - prints squares
 * @size: parameter
 * Return: returns nothing
 */

void print_square(int size)
{
	int incl, inc2;

	if (size > 0)
	{
		for (incl = 0; incl < (size - 1); inc1++)
		{
			for (inc2 = 0; inc2 < (size - 1); inc2++)
			{
				putchar('#');
			}
			
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
