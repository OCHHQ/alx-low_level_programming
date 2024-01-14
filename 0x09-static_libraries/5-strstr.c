#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the main string to be searched
 * @needle: the substring to be located
 *
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*i == '\0')
			return (haystack);
	}
	return (0);
}
