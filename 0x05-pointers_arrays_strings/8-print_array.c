#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: pointer to array.
 * @n: array size.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
