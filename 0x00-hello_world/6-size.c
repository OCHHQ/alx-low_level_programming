#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if existed properly, non-zero otherwise
 */
int main(void)
{
	printf("size of the char: %1d byte(s)\n", sizeof(char));
	printf("size of an int: %1d byte(s)\n", sizeof(int));
	printf("size of a long int: %1d byte(s)\n", sizeof(long int));
	print("size of a long long int: %1d byte(s)\n", sizeof(long long int));
	print("size of a float: %1d byte(s)\n", sizeof(float));
	return (0);
