#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print all argument with
 * a string between them
 * @separator: the string between the numbers
 * @n: number ot arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d",va_arg(args, int));
	}
	printf("\n");

}

