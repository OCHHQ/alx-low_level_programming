#include "main.h"
/**
 * _strncat - concertrate two string but add inputed num of bytes
 * @dest: string to be 
 * @src: string to be completed at the end of the dest.
 * @n: integer permeter to be compared by index
 * Return: return new concertrated string
 */

char *_strncat(char *dest, char *src, int n)
{
	
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	
	return (dest);

}

