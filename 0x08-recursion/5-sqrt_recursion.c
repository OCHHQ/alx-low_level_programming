#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * sqrt_helper - Helper function to calculate the square root recursively
 * @n: The number
 * @i: The current guess for the square root
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return(i);
	return (actual_sqrt_recursion(n, i + 1));
}
