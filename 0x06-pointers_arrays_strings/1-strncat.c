#include "main.h"

/**
 * _strncat - A functions that concatenates two strings
 * @dest: The first parameter
 * @src: The second parameter
 * @n: The n parameter
 *
 * Return: pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int conc = 0;
	int conc_str = 0;

	while (dest[conc++])
	{
		conc_str++;
	}

	for (conc = 0; src[conc] && conc < n; conc++)
		dest[conc_str++] = src[conc];

	return (dest);
}
