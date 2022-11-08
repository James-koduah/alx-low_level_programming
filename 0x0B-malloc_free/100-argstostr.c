#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - jjjjj'
 * @ac: kskksk
 * @av: kskksks
 * Return: kskskks
 */
char *argstostr(int ac, char **av)
{
	char *arr;
	int i;
	int j;
	int len;
	int si;

	len = 0;
	si = 0;
	arr = malloc(sizeof(char *) * ac);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		len += strlen(av[i]);
		len += 1;
	}
	arr = malloc(sizeof(char) * len);

	for (i = 1; i < ac; i++)
	{
		len = strlen(av[i]);
		for (j = 0; j < len; j++)
		{
			arr[si] = av[i][j];
			si++;
		}
		arr[si] = '\n';
		si++;
	}
	return (arr);
}
