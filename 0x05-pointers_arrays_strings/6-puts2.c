#include "main.h"

/**
 * puts2 - Function that print other character
 * @str: parameter
 *
 */
void puts2(char *str)
{
	int prt_cha = 0, len = 0;

	while (str[prt_cha++])
	{
		len++;
	}
	for (prt_cha = 0; prt_cha < len; prt_cha += 2)
	{
		_putchar(str[prt_cha]);
	}
	_putchar('\n');
}
