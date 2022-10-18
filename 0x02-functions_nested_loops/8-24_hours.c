#include <stdio.h>
/**
 * jack_bauer - kdkdkdk
 * Return: kdkdkdk
 */
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
					printf("%d%d : %d%d\n", aa, bb, cc, dd);
					dd++;
				}
				cc++;
			}
			bb++;
		}
		aa++;
	}
}
