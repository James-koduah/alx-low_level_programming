#include <stdio.h>
/**
 * puts2 - print a string form a pointed position
 * @str: kskskks
 * Return: lskdkdk
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		putchar(*str);	
		str = str + 2;
		i++;
	}
	putchar('\n');
}
