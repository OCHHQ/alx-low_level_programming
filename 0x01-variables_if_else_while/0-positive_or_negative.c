#include <stdio.h>
#include <stdlib>
#include <time.h>
/**
 * main - entry point
 *
 * Return: Always success
 */
int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > o)
	printf("%d is positive\n", n); else if (n == 0)
	printf("%d is zero\n", n); else
	printf("%d is negative\n", n);

return (0);
}