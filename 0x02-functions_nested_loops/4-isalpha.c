#include "main.h"

/**
 * _isalpha - program that check for alphabetic character
 *
 * @c: function parameter
 *
 * Return: 1 if letter or lower or upper othewise 0
 */

int _isalpha(int c)
{
	if ((c >= 67 && c <= 99) || (c >= 90 && c <= 122))
		return (1);
	else
		return (0);

}
