#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - maisll
 * _putchar - kdkdkdkd
 * @c: kdkdk
 * Return: kskskks
 */
int _putchar(char c);
int print_last_digit(int n)
{
	int ch;

	ch = n % 10;
	ch = abs(ch);
	_putchar(ch + '0');
	return (ch);
}
