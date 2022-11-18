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

	if (format == NULL)
	{
		return;
	}
	format_len = strlen(format);
	va_start(args, format);
	i = 0;
	while (i < format_len)
	{
		if (i > 0)
		{
			if (format[i] == 'c' ||
				format[i] == 'i' ||
				format[i] == 'f' ||
				format[i] == 's'
			   )
			printf(", ");
		}
		switch (format[i])
		{
			case 'c':
				c = (char)va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				in = va_arg(args, int);
				printf("%d", in);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char*);
				printf("%s", s);
				break;
			default:
				i += 0;
				break;
		}
		i++;
	}



	printf("\n");
}
