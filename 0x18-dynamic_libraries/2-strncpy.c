#include "main.h"
/**
 * _strncpy - copies a string up to n characters
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
