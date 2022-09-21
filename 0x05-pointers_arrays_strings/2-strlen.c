#include "main.h"

/**
 * function - that print athe lenght of a string
 * Return 0
 */


int _strlen(char *s)
{
	int lenght =0;

	while(s[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

