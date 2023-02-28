#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: parameter
 * Return: Always 0
 */
int _strlen(char *s)
{
	char len;

	len = 0;

	while (*s++)
	len++;
return (len);

}
