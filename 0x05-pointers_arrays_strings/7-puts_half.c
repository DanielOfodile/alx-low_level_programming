#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: pointer to string.
 * Return: void.
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		int j = i / 2;

		while (j < i)
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		int j = ((i - 1) / 2);

		while (j < i - 1)
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}
