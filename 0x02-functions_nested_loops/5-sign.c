#include <stdio.h>
/**
 * print_sign - print sign pos or neg
 * @n: kkdkdk
 * Return: kdkdkd
 */
int print_sign(int n)
{
	int ch;

	if (n < 0)
	{
		putchar('-');
		ch = -1;
	}
	else
	if (n > 0)
	{
		putchar('+');
		ch = 1;
	}
	else
	{
		putchar('0');
		ch = 0;
	}
	return (ch);
}
