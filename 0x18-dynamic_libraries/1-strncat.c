#include "main.h"
/**
 * _strncat - concatenates two strings with n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int b;
	int c;

	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	c = 0;
	while (c < n && src[c] != '\0')
	{
	dest[b] = src[c];
	b++;
	c++;
	}
	dest[b] = '\0';
	return (dest);
}
