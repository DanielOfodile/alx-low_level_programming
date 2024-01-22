#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints all numbers of base 16 in lower case.
 * Return: Always (0) on success.
 */
int main(void)
{
	int numAsciivalue = 48;
	int lowercaseAscii = 97;

	while (numAsciivalue <= 57)
	{
		putchar(numAsciivalue);
		++numAsciivalue;
	}
	while (lowercaseAscii <= 102)
	{
		putchar(lowercaseAscii);
		++lowercaseAscii;
	}
	putchar('\n');

	return (0);
}
