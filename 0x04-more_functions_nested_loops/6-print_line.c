#include "main.h"

/**
 * print _line - a function that draw a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: a straight line 
 */
void print_line(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
