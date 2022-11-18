#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print all arguments with
 * a sting between them
 * @separator: the string between the strings
 * @n: number og arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *bb;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);

		bb = va_arg(args, char*);
		if (bb != NULL)
		{
			printf("%s", bb);
		}
		else
		{
			printf("(nil)");
		}
	}
	printf("\n");
}
