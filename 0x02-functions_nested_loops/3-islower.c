#include "main.h"

/**
 * _islower - function to check for lowercase character
 * @c: is the int that will use for the argumnent of the function
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
