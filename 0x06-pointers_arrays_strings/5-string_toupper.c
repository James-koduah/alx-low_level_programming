#include <stdio.h>
/**
 * string_toupper - kskskks
 * @n: ksksks
 * Return: kskskk
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i])
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] = n[i] - 32;
		}
		i++;
	}
	return (*n);
}
