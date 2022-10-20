#include <stdio.h>
/**
 * print_number - kdkdkkd
 * @c: kdkdk
 * Return: kddjsj
 */
int _putchar(char c);
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		main(n / 10);
	}
		_putchar((n % 10) + '0');
}
