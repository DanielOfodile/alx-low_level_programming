#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void.
 */
void times_table(void)
{
	int rows = 10;
	int columns = 10;

	int row = 0;

	while (row < rows)
	{
		int column = 0;

		while (column < columns)
		{
			int product = row * column;

			if (product < 10)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
				else
				{
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
			if (column < columns - 1)
			{
				_putchar(',');
				_putchar(' ');
			}

			column++;
		}
		_putchar('\n');
		row++;
	}
}
