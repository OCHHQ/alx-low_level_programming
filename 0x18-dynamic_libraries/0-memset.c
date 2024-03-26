#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s: pointer to the memory area
 * @b: constant byte to fill the memory with
 * @n: number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int c = 0;

	for (; n > 0; c++)
	{
		s[c] = b;
		n--;
	}
	return (s);
}
