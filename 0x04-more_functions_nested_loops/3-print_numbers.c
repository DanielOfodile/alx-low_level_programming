#include "main.h"

/**
 * print_numbers - prints numbers 0 - 0.
 * Return: void.
 */
void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
