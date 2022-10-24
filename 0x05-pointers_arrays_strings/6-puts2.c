#include <stdio.h>
/**
 * _puts2 - print a string form a pointed position
 * @str: kskskks
 * Return: lskdkdk
 */
void puts2(char *str)
{
	while (*str)
	{
		putchar(*str);
		str = str + 2;
	}
	putchar('\n');
}
