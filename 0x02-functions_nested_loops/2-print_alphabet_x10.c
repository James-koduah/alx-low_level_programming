#include <stdio.h>
/**
 * print_alphabet_x10 - jskskks
 * Return: alphabet
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i < 11)
	{
		int ch;

		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
