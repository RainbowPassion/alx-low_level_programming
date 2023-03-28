#include "main.h"
/**
* print_rev - function that prints a string, in reverse
* @s: string
* return: 0
*/
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
	len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
	putchar(s[i]);
	}
	putchar('\n');
}