#include "main.h"

/**
 * _atoi - A function that converts a string to an integer.
 * @d: Parameter
 *
 * Return: 0 if there are no numbers in the string.
 */

int _atoi(char *d)
{
	int str_int = 1;

	unsigned int number = 0;

	do {
		if (*d == '-')
		{
			str_int *= -1;
		}
		else if (*d >= '0' && *d <= '9')
		{
			number = (number * 10) + (*d - '0');
		}
		else if (number > 0)
		{
			break;
		}
	} while (*d++);
	return (number * str_int);
}
