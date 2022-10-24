#include <stdio.h>
/**
 * _puts - print a string form a pointed position
 * @str: kskskks
 * Return: lskdkdk
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		*str++;
	}
	putchar('\n');
}
