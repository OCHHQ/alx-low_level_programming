#include "main.h"
#include <stdio.h>

/**
 * function - that print athe lenght of a string
 * @s : a pointer
 * Return: length of string
 */


int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

