#include "main.h"
/**
 * _pow_recursion - Calculates the power of a number
 * @x: The base
 * @y: The exponent
 *
 * Return: The result of x raised to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _powe_recursion(x, y -1));
}
