#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the null byte,
 * to the buffer pointed to by dest
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int a = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; a < i ; a++)
	{
		dest[a] = src[a];
	}
	dest[i] = '\0';
	return (dest);
}
