#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - similar to printf
 * @format: string of characters
 * Return: kskskks
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	int format_len;
	char c;
	int in;
	float f;
	char *s;

	format_len = strlen(format);
	va_start(args, format);
	for (i = 0; i < format_len; i++)
	{
		/*c i f s*/
		if (format[i] == 'c')
		{
			if (i > 0)
				printf(", ");
			c =(char)va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			if (i > 0)
				printf(", ");
			in = va_arg(args, int);
			printf("%d", in);
		}
		else if (format[i] == 'f')
		{
			if (i > 0)
				printf(", ");
			f = (float)va_arg(args, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			if (i > 0)
				printf(", ");
			s = va_arg(args, char*);
			printf("%s", s);
		}
		else
		{
			continue;
		}
	}
	printf("\n");
}
