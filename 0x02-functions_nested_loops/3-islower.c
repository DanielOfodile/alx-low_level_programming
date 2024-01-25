#include "main.h"

/**
 * _islower - checks for lowercase letter.
 *
 * @c: parameter to check.
 * Return: 1 if c is lowercase or 0 if otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
		else
			return (0);
}
