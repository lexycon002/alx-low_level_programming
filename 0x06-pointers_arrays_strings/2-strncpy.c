#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: The first paramenter
 * @src: The second parameter
 * @n: The n parameter
 *
 * Return: the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cpy_str = 0;
	int cha_str = 0;

	while (src[cpy_str++])
	{
		cha_str++;
	}

	for (cpy_str = 0; src[cpy_str] && cpy_str < n; cpy_str++)
	{
		dest[cpy_str] = src[cha_str];
	}
	for (cpy_str = cha_str; cpy_str < n; cpy_str++)
	{
		dest[cpy_str] = '\0';
	}
	return (dest);
}
