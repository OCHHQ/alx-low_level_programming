#include "main.h"
/**
 * _memset - fills a block of memory with a specific value
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory with
 * @n: number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

