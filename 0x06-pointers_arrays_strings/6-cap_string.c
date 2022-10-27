#include <stdio.h>
/**
 * cap_string - ksksk
 * @n: kskksk
 * Return: skksksksk
 */
char *cap_string(char *n)
{
	int i;

	i = 0;
	while (n[i])
	{
		if (n[i] == '\t' ||
			n[i] == ';' ||
			i == '0' ||
			n[i] == ',' ||
			n[i] == '.' ||
			n[i] == '!' ||
			n[i] == '?' ||
			n[i] == '"' ||
			n[i] == '(' ||
			n[i] == ')' ||
			n[i] == '{' ||
			n[i] == '}' ||
			n[i] == '\n'||
			n[i] == ' ' 
		   )
		{
			if (n[i + 1] >= 97 && n[i + 1] <= 122)
			{
				n[i + 1] -= 32;
			}
		}


		i++;
	}
	return (n);
}
