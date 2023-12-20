#include <stdio.h>

int main(void) {
    int term1 = 1, term2 = 2, nextTerm, sum = 0;

    while (term1 <= 4000000) {
        /* Check if the current term is even */
        if (term1 % 2 == 0) {
            sum += term1;
        }

        /* Calculate the next term in the Fibonacci sequence */
        nextTerm = term1 + term2;

        /* Update terms for the next iteration */
        term1 = term2;
        term2 = nextTerm;
    }

    /* Print the sum of even-valued terms */
    printf("Sum of even-valued terms in Fibonacci sequence: %d\n", sum);

    return 0;
}
