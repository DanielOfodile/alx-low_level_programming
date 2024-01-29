#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: parameter to print.
 * Return: void.
 */
void print_times_table(int n)
{
	int rows = n;
	int columns = n;

	int row = 0;

	if (n < 0 || n > 15)
		return;
	while (row <= rows)
	{
		int column = 0;

		while (column <= columns)
		{
			int product = row * column;

			if (column == 0)
			{
				_putchar(product + '0');
			}
				else if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((product / 100) + '0');
					_putchar(((product % 100) / 10) + '0');
					_putchar((product % 10) + '0');
				}
			if (column <= columns - 1)
			{
				_putchar(',');
			}

			column++;
		}
		_putchar('\n');
		row++;
	}
}
