#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    for (int i = 0; argv[i] != NULL; i++)
    {
        printf("%s\n", argv[i]);
    }

    return (0);
}
