#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints the alphabet in lower case reverse order.
 * Return: Always (0) on success.
 */
int main(void)
{
	int lowercaseAscii = 122;

	while (lowercaseAscii >= 97)
	{
		putchar(lowercaseAscii);
		--lowercaseAscii;
	}
	putchar('\n');

	return (0);
}
