#include <stdio.h>
void _putchar(char);


/**
 * main - print putchar
 * Return: always 0
 */

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);

}

void _putchar(char c)
{
    putchar(c);
}
