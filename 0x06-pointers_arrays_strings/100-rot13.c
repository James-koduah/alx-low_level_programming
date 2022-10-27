#include <stdio.h>
/**
 * rot13 - ksksksk
 * @n: kskksk
 * Return: kskskks
 */
char *rot13(char *n)
{
	int i;
	int j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	j = 0;
	while (n[i])
	{
		for (j = 0 ; j < 52; j++)
		{
			if (n[i] == a[j])
			{
				n[i] = b[j];
			}

		}
		

		i++;
	}
	return (n);

}
