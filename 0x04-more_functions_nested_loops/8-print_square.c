#include "main.h"

/**
 * print_square - prints a square.
 * @size: square size.
 * Return: void.
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int row = 1;

		while (row < size + 1)
		{
			int column = 1;

			while (column < size + 1)
			{
				_putchar('#');
				column++;
			}
			_putchar('\n');
			row++;
		}
	}
}
