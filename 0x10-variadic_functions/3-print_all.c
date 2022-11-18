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
	int i, in;
	float f;
	char *s;


	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (i > 0 && (format[i] == 'c' || format[i] == 'i'
		|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
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
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
