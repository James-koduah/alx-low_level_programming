#include <stdio.h>
/**
 * main - lslsl
 * Return: lslslsl
 */
int main(void)
{
	int ch;
	int bb;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		for (bb = '0' ; bb <= '9' ; bb++)
		{
			putchar(ch);
			putchar(bb);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
