#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: prints all possible combinations of single-digit numbers.
 * Return: Always(0) on success.
 */
int main(void)
{
	int numAsciivalue = 48;

	while (numAsciivalue <= 57)
	{
		putchar(numAsciivalue);
		putchar(',');
		putchar(' ');
		++numAsciivalue;
	}
	putchar('\n');
}
