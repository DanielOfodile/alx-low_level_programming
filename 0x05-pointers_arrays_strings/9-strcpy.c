#include "main.h"

/**
 * _strcpy - copies the string.
 * @dest: pointer to be copied to.
 * @src: pointer to string to be copied.
 * Return: void.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		*dest = *src;
		i++;
	}
	return dest[i];
}
