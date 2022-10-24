#include <stdio.h>
/**
 * _puts2 - print a string form a pointed position
 * @str: kskskks
 * Return: lskdkdk
 */
void puts2(char *str)
{
	while (*str != 0)
	{
		putchar(*str);
		str = str + 2;
	}
	putchar('\n');
}
