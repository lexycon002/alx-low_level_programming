#include <stdio.h>
/**
 * main - A program that excluded two Alphabet in lowercase
 *
 * Return: 0 on success
 */
int main(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		if (lc != 'q' && lc != 'e')
		{
			putchar(lc);
		}
		lc++;
	}
	putchar('\n');
	return (0);
}

