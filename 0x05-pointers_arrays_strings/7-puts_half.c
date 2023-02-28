#include "main.h"

/**
 * puts_half - function that print half of a string.
 * @str: parameter
 *
 */

void puts_half(char *str)
{
	int prt_str = 0, cha = 0;
	int i;

	while (str[prt_str++])
	{
		cha++;
	}
	if ((cha % 2) == 0)
	{
		i = cha / 2;
	}
	else
	{
		i = (cha + 1) / 2;
	}
	for (prt_str = i; prt_str < cha; prt_str++)
	{
		_putchar(str[prt_str]);
	}
	_putchar('\n');
}
