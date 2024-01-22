#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints the alphabet in lower case.
 * Return: Always (0) on success.
 */
int main(void)
{
	int lowercaseAscii = 97;

	while (lowercaseAscii <= 122)
	{
		if (lowercaseAscii != 101 && lowercaseAscii != 113)
			putchar(lowercaseAscii);
			lowercaseAscii++;
	}
	putchar('\n');

	return (0);
}
