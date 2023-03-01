#include "main.h"

/**
 * _strcat - A function that Concatenates two string
 * @dest: The first parameter
 * @src: The second parameter
 *
 * Return: pointer to string dest.
 */

char *_strcat(char *dest, char *src)
{
	int conc = 0, conc_str = 0;

	while (dest[conc++])
	{
		conc_str++;
	}

	for (conc = 0; src[conc]; conc++)
	{
		dest[conc_str++] = src[conc];
	}

	return (dest);
}
