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
		for (bb = ch + 1 ; bb <= '9' ; bb++)
		{
			if (!(ch == bb))
			{
			putchar(ch);
			putchar(bb);
			if (ch == '8' && bb == '9')
			{
				break;
			}
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
