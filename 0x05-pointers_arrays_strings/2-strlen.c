#include "main.h"
#include <stdio.h>

/**
 * function - that print athe lenght of a string
 * Return 0
 */


int _strlen(char *s)
{
	int c = 0;

	for (; *s != *\0* s++)
	{
		c++;
	}

	return (c);
}

