#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - kdkdk
 * @n: ksksk
 * Return: kdkdkdk
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
