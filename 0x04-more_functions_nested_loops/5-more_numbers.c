#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14 ten times.
 * Return: void.
 */
void more_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		int i = 0;

		while (i < 15)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
		n++;
	}
}
