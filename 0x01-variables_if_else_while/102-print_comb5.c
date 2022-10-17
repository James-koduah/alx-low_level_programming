#include <stdio.h>
/**
 * main - lskdjdj
 * Return: kdkdk
 */
int main(void)
{
	int aa;
	int bb;
	int cc;
	int dd;
	int hh;
	int nu;

	nu = 0;
	for (aa = '0' ; aa <= '9'; aa++)
	{
		for (bb = '0' ; bb <= '9' ; bb++)
		{
			hh = 1;
			for (cc = aa ; cc <= '9' ; cc++)
			{
				for (dd = '0' ; dd <= '9' ; dd++)
				{
					if (hh == 1 && bb > 0)
					{
						dd = bb + 1;
						hh = 3;
					}
					putchar(aa);
					putchar(bb);
					putchar(' ');
					putchar(cc);
					putchar(dd);
					if (aa == '9' && bb == '8')
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
