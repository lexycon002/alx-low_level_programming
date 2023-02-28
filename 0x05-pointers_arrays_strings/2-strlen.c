#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: parameter
 */
int _strlen(char *s)
{
	char len;

	len = 0;

	while (*s++)
	len++;
return (len);

}
