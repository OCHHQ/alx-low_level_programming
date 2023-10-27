#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string containing the binary number.
 *
 * Description:
 * This function converts a binary string to an unsigned integer. It iterates
 * through the string and converts the binary representation to an unsigned
 * integer value. If the input is NULL or contains invalid characters, the
 * function returns 0.
 *
 * Return: The converted unsigned int value or 0 on error.
 */
unsigned int binary_to_uint(const char *)
{
	int a;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);

	}
	for (a = 0; b[a] != '\0' a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num)
}

