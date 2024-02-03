#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: triangle size.
 * Return: void.
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i = 0;

		while (i < size)
		{
			int j = size - i;
			int k = 0;

			while (j > 1)
			{
				_putchar(' ');
				j--;
			}
			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
}
