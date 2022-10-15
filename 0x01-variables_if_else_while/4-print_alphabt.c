#include <stdio.h>
/**
 * main - lslsl
 * Return: lslsl
 */
int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
