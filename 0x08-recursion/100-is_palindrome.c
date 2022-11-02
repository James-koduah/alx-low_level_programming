#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * is_palindrome - kkkksksksk
 * @s: ksksksk
 * Return: kskskks
 */
int _strlen(char *s);
void rev(char *s, int i, int len);
int is_palindrome(char *s)
{
	int b;
	int q;
	char *dest;

	dest = (char*)malloc(20);
	
	strcpy(dest, s);

	b = _strlen(s);
	dest = rev(dest, 0, b); 	
	q = strcmp(s, dest);
	while (*s != 0)
	{
		
		putchar(*s);
		s++;
	}
	return (q);
	
}

void rev(char *s, int i, int len)
{
	char t;

	if (i < (len / 2))
	{
	t = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = t;
	rev(s, (i + 1),len);
	}
}

int _strlen(char *s)
{
	int jj;

	jj = 0;
	while (*s++ != 0)
	{
		jj++;
	}
	return (jj);
}
