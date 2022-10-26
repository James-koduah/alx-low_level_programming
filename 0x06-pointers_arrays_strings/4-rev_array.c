#include <stdio.h>
/**
 * reverse_array - kkdkdk
 * @a: ksksks
 * @n: ksksksk
 * Return:ksksksk
 */
void reverse_array(int *a, int n)
{
	int a;
	int i;
	int b;

	a = n /2;
	for (i = 0; i < a; i++)
	{
		b = a[i];
		a[i] = a[n - i];
		a[n - i] = b;
	}
}
