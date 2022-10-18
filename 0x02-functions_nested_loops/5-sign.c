#include <stdio.h>
/**
 * print_sign - print sign pos or neg
 * @n: kkdkdk
 * Return: kdkdkd
 */
int print_sign(int n)
{
	int ch;
	char bb;

	if (n < 0)
	{
		bb = '-';
		ch = -1;
	}
	else
	if (n > 0)
	{
		bb = '+';
		ch = 1;
	}
	else
	{
		bb = '0';
		ch = 0;
	}
	printf("%d", bb);
	return (ch);
}
