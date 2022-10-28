#include <stdio.h>
/**
 * leet - kdkdkkd
 * @n: kdkdkdk
 * Return: kskskks
 */
char *leet(char *n)
{
	int i;
	int j;
	char a[] = {'O', 'L', '&', 'E', 'A', '&', '&', 'T'};

	i = 0;
	j = 0;

	while (n[i] != 0)
	{
		for (j = 0; j < 8; j++)
		{
			if (n[i] == a[j] || n[i] == a[j] + 32)
				n[i] = j + '0';
		}

		i++;
	}
	return (n);
}
