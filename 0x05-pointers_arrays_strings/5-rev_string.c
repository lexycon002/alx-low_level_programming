#include "main.h"

/**
 * rev_string - A function that reverse a string
 * @s: parameter
 *
 */
void rev_string(char *s)
{
	int rev = 0, prt = 0;

	char rev_cha;

	while (s[rev++])
	{
		prt++;
	}
	for (rev = prt - 1; rev >= prt / 2; rev--)
	{
		rev_cha = s[rev];
		s[rev] = s[prt - rev - 1];
		s[prt - rev - 1] = rev_cha;
	}
}
