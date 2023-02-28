#include "main.h"

/**
 * _strcpy - A function that copies string pointed to by src
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	int cpy_str = 0;

	for (cpy_str = 0; src[cpy_str] != '\0'; cpy_str++)
	{
		dest[cpy_str] = src[cpy_str];
	}
	dest[cpy_str] = '\0';
	return (dest);

}
