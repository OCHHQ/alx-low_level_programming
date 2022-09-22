#include "main.h"

/**
 * _strcat - the string pointed by the src to
 * the end of the string pointed to by @dest
 * @dest: string that will be
 * @src: string to be concertrated
 *
 * Return: return the pointer to the destiniation;
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
