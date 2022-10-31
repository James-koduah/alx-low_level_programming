#include <stdio.h>
/**
 * print_chessboard - kskskksksk
 * @a: ksksksk
 * Return: kskskskkssk
 */
void print_chessboard(char (*a)[8])
{
	int ch;
	int ii;

	ch = 0;
	while (a[ch][7])
	{
		for (ii = 0; ii < 8; ii++)
		{
			putchar(a[ch][ii]);

		}
		putchar('\n');
		ch++;
	}
}
