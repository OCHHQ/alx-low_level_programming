#include <stdio.h>

void print_largest_prime_factor(long n);

/**
 * print_largest_prime_factor - prints the largest prime factor of a number
 * @n: the number to find the largest prime factor for
 */
void print_largest_prime_factor(long n)
{
    long i, max_prime;

    while (n % 2 == 0)
    {
        max_prime = 2;
        n = n / 2;
    }

    for (i = 3; i * i <= n; i = i + 2)
    {
        while (n % i == 0)
        {
            max_prime = i;
            n = n / i;
        }
    }

    if (n > 2)
        max_prime = n;

    printf("%ld\n", max_prime);
}

int main(void)
{
    long number = 612852475143;

    print_largest_prime_factor(number);

    return 0;
}
