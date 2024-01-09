#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character to locate
 *
 * Return: a pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *result = NULL;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			result = &s[i];
			break;
		}
	}

	return (result);
}

