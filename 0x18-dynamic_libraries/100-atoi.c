#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int sig = 1, a = 0;
	unsigned int unsig = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-')
			sig *= -1;
		a++;
	}
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{
		unsig  = (unsig * 10) + (s[a] - '0');
		a++;
	}
	unsig *= sig;
	return (unsig);
}
