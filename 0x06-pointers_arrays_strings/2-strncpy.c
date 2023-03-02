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
	int str;

	str = 0;

	while (str < n && src[str] != '\0')
	{
		dest[str] = src[str];
		str++;
	}
	while (str < n)
	{
		dest[str] = '\0';
		str++;
	}
	return (dest);
}
