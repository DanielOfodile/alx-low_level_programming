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
	{
		i = -i;
	}
	int last_digit = i % 10 + '0';
	_putchar(last_digit);
	return (last_digit - '0');
}
