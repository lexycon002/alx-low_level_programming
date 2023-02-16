#include <stdio.h>
/**
 * main - A program that print the sizeof various types on computer
 * Return: 0 (success)
 */
int main(void)
{
char charType;
int intType;
int intType;
double doubleType;
float floatType;
printf("size of char: %zu bytes\n", sizeof(charType));
printf("size of a long int: %zu bytes \n", sizeof(intType));
printf("size of a long long int: %zu bytes \n", sizeof(intType));
printf("size of a float: %zu bytes \n", sizeof(floatType));
return (0);
}

