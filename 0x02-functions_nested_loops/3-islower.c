#include "main.h"
/**
 * _islower - A program that checks for lowercase.
 *
 *  @c: A parameter to check for lowercase
 *
 * Return: always 0
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

