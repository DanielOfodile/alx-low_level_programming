#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Print every possible combinations of single digit numbers.
 * Return: Always (0) on success.
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		if (n == 9)
			break;
		putchar(',');
		putchar(' ');
		n++;
	}

	putchar('\n');

	return (0);
}
