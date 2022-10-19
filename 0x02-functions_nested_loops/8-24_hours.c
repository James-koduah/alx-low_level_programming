#include <stdio.h>
/**
 * jack_bauer - kdkdkdk
 * @c: kdkdkdk
 * Return: kdkdkdk
 */
int _putchar(char c);
void jack_bauer(void)
{
	int aa;

	aa = 0;
	while (aa < 3)
	{
		int bb;

		bb = 0;
		while (bb < 4)
		{
			int cc;

			cc = 0;
			while (cc < 6)
			{
				int dd;

				dd = 0;
				while (dd <= 9)
				{
					_putchar(aa + '0');
					_putchar(bb + '0');
					_putchar(':');
					_putchar(cc + '0');
					_putchar(dd + '0');
					putchar('\n');
					dd++;
				}
				cc++;
			}
			bb++;
		}
		aa++;
	}
	putchar('\n');
}
