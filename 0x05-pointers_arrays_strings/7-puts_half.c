#include <stdio.h>
/**
 * puts_half - print second hslf of string
 * @str: kksksk
 * Return: kskskks
 */
void puts_half(char *str)
{
	int i;
	int n;
	char *b = &str;
	
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
	while (b)
	{
		putchar(*b);
		b++;
	}
}
