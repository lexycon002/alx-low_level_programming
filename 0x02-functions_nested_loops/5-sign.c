#include "main.h"
/**
 * print_sign - program that print sign of a number
 *
 * @n: parameter
 *
 * Return: 1 if success and 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');

	}
	return (-1);
}
