#include <stdio.h>
/**
 * print_number - kdkdkkd
 * @c: kdkdk
 * Return: kddjsj
 */
int _putchar(char c);
void print_number(int n)
{
	int num;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	
	_putchar((num % 10) + '0');
}
