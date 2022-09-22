#include "main.h"
/**
 * _strncpy - c fuction 
 * terminating null byte
 * if the lenght of the src string is less
 * the reminder of the destiniation
 * @dest: buffer
 * @src: the src strings
 * @n: max
 * Return: return
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
