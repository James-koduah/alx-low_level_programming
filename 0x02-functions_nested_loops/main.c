#include <stdio.h>
#include "main.h"
/**
 * main - dddddd
 * Return: ksslsl
 */
void print_alphabet();

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return;
}
