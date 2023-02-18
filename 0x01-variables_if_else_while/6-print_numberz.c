#include <stdio.h>
/**
 * main - A program that prints numbers of base 10
 *
 * Return: 0 on Success
 */

int main(void)
{
	int b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
