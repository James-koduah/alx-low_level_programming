#include <stdio.h>
/**
 * print_sign - print sign pos or neg
 * @c: kdkdkdk
 * Return: kdkdkd
 */
int _putchar(char c);
int print_sign(int n)
{
	int ch;
	char bb;

	if (n < 0)
	{
		bb = '-';
		ch = -1;
		_putchar(bb);
		return (ch);
	}
	else
	if (n > 0)
	{
		bb = '+';
		ch = 1;
		_putchar(bb);
		return (ch);
	}
	else
	{
		bb = '0';
		ch = 0;
		_putchar(bb);
		return (ch);
	}
}
