#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to find the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int lengi = 0;

	while (*s != '\0')
	{
		lengi++;
		s++;
	}
	return (lengi);
}
