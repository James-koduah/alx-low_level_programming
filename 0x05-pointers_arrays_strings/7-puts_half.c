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
	int j;

	i = 0;
	while (str[i])
	{
		i++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
	}
	
	for (j = n; j < i; j++)
	{
		putchar(str[j]);
	}
	putchar('\n');
}
