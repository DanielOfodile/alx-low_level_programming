#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @i: parameter to check.
 * Return: last digit.
 */
int print_last_digit(int i)
{
	if (i < 0)
		i = -i;

	_putchar(i % 10 + '0');

	return (i % 10);
}
