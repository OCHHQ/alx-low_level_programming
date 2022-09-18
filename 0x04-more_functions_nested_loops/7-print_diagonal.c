#include "main.h"

/**
 * print_diagonal - prints a diagonal 
 * @n: parameter
 * Return: returns nothing
 */
void print_diagonal(int n)
{
	int len,space;

	if (n > 0)
	{
		for (space = 0; space < len; space++)
		{
			putchar(' ');
		}

		putchar('\\');

		if (len == (n - 1))
		{
			continue;
		}
		putchar('\n');
	}
	putchar('\n');
}
