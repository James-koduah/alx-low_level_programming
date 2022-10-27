#include <stdio.h>
/**
 * reverse_array - kkdkdk
 * @a: ksksks
 * @n: ksksksk
 * Return:ksksksk
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;
	int c;

	c = n / 2;
	for (i = 0; i < c; i++)
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
}
