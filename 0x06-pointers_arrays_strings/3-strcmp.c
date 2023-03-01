#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 * @s1: first parameter to be compared.
 * @s2: second parameter to be compared.
 *
 * Return: A negative value, a positive and zero
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
