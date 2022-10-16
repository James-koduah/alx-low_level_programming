#include <stdio.h>
/**
 * main - lslslsl
 * Return: kskskks
 */
int main(void)
{
	int ch;
	int bb;
	int cc;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		for (bb = ch + 1 ; bb <= '9' ; bb++)
		{
			for (cc = bb + 1 ; cc <= '9' ; cc++)
			{
				if (!(ch == bb) && !(bb == cc))
				{
					putchar(ch);
					putchar(bb);
					putchar(cc);
					if (ch == '7' && bb == '8' && cc == '9')
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
