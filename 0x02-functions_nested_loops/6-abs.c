#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @i: parameter to check
 * Return: int.
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
}
