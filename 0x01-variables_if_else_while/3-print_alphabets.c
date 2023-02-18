#include <stdio.h>
/**
 * main - A program that print the Alphabet in lowercase and then uppercase
 * Return: 0 on Success
 */
int main(void)
{
	char lc = 'a';
	char uc = 'A';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}
	putchar('\n');
	return (0);
}
