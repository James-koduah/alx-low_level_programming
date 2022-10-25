#include <stdio.h>
#include <string.h>
/**
 * puts_half - print second hslf of string
 * @str: kksksk
 * Return: kskskks
 */
void puts_half(char *str)
{
	int len;
	int mid;
	int i;
	int n;
	
	i = 0;
	while (str)
	{
		i++;
		str++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
	}
	str = str - n;
	while (str)
	{
		putchar(*str);
		str++;
	}
}
