#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: line length.
 * Return: void.
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i = 0;

		while (i < n)
		{
			int j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}

			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}


