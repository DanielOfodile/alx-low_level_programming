#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints numbers.
 * Return: Always (0) on success.
 */
int main(void)
{
	int numAsciivalue = 48;

	while (numAsciivalue <= 57)
	{
		putchar(numAsciivalue);
		++numAsciivalue;
	}
	putchar('\n');

	return (0);
}
