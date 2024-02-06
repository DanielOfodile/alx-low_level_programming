#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: pointer to string.
 * Return: void.
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		*s = (s[i]);
		i--;
		
	}
}
