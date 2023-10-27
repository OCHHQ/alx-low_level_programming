#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
    int shift = sizeof(n) * 8 - 1;
    int flag = 0;

    if (n == 0)
    {
        putchar('0');
        return;
    }

    while (shift >= 0)
    {
        if ((n >> shift) & 1)
        {
            putchar('1');
            flag = 1;
        }
        else if (flag == 1)
        {
            putchar('0');
        }
        shift--;
    }
}

int main(void)
{
    unsigned long int n = 98;

    printf("Binary representation of %lu is: ", n);
    print_binary(n);
    putchar('\n');

    return (0);
}


