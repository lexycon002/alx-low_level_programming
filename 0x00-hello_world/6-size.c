#include <stdio.h>
/**
 * main - A program that print the sizeof various types on computer
 * Return: 0 (success)
 */
int main(void)
{
printf("size of char: %zu byte(s)\n", sizeof(char));
printf("size of an int: %zu byte(s)\n", sizeof(int));
printf("size of a long int: %zu byte(s)\n", sizeof(long int));
printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}

