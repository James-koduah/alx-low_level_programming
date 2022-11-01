#include <stdio.h>
/**
 * print_diagsums - kskksksk
 * @a: kskskksks
 * @size: kskksks
 * Return: kskksksk
 */
void print_diagsums(int *a, int size)
{
	int b;
	int vv;


	vv = 0;
	for (b = 0; b < size; b++)
	{
		vv += a[b];
		a += size;
	}
	printf("%d, ", vv);
	a -= size;
	vv = 0;
	for (b = 0; b < size; b++)
	{
		vv += a[b];
		a -= size;
	}
	printf("%d\n", vv);

}
