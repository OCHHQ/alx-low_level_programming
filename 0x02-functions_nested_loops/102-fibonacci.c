#include <stdio.h>

/**
 * Calculates the next Fibonacci number given the current two numbers.
 */
unsigned long calculateNextFibonacci(unsigned long a, unsigned long b) {
    return a + b;
}

int main(void) {
    int inc;
    unsigned long fib1 = 0, fib2 = 1, nextFib;

    for (inc = 0; inc < 50; inc++) {
        nextFib = calculateNextFibonacci(fib1, fib2);

        printf("%lu", nextFib);

        fib1 = fib2;
        fib2 = nextFib;

        if (inc == 49)
            printf("\n");
        else
            printf(", ");
    }

    return (0);
}
