#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: Prints alphabets in upper case.
 * Return: always (0) on success.
 */
int main(void)
{
	int uppercaseAscii = 65;
	int lowercaseAscii = 97;

	while (lowercaseAscii <= 122)
	{
		putchar(lowercaseAscii);
		++lowercaseAscii;
	}
	while (uppercaseAscii <= 90)
	{
		putchar(uppercaseAscii);
		++uppercaseAscii;
	}
	putchar('\n');

	return (0);
}
