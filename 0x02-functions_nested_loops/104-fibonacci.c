#include <stdio.h>

int main(void)
{
    int i;
    unsigned long current = 1, previous = 0, next;

    for (i = 1; i <= 98; ++i)
    {
        printf("%lu", current);

        if (i < 98)
            printf(", ");

        next = current + previous;
        previous = current;
        current = next;
    }

    printf("\n");

    return 0;
}
