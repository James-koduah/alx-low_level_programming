#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * strtow - kskjsk
 * @str: kskksk
 * Return: kskksks
 */
char **strtow(char *str)
{
	char **arr;
	int i;
	int len;
	int height;
	int vv[10];
	int j;
	int b;
	int m;

	
	len = strlen(str);
	if (str == NULL || len == 0 || *str == " ")
	{
		return (NULL);
	}
	m = 0;
	height = 0;
	b = 0;
	j = 0;
	for (i = 0; i < 10; i++)
	{
		vv[i] = 0;
	}
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			vv[b] += 1;
			if (str[i + 1] == ' ')
			{
				height += 1;
				b += 1;
			}
		}	
	}

	arr =  (char **)malloc(sizeof(char *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}
		


	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(char) * vv[i]);
		if (arr[i] == NULL)
			return (NULL);
		b =0;


		for(j = m; j < len; j++)
		{
			if(str[j] != ' ')
			{
				arr[i][b] = str[j];
				b++;
				if(str[j + 1] == ' ')
				{
					m = j+1;
					j = len;
				}
			}
		}

	}

	return (arr);
}
