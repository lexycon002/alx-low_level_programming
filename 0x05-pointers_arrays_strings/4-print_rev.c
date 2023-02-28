#include "main.h"
/**
 * print_rev - A function that print string in reverse order
 * @s: Parameter
 *
 */
void print_rev(char *s)
{
	int rev = 0;
	int prt = 0;

	while (s[prt++])
	{
		rev++;
	}
	for (prt = rev - 1; prt >= 0; prt--)
	{
		_putchar(s[prt]);
	}
	_putchar('\n');
}
