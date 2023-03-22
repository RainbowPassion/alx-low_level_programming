#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
*
* main - print alphabet
*
* Return: void
*/
void print_alphabet_x10(void)
{
char l = 'a';
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 26; j++)
{
_putchar(l + j);
}
_putchar('\n');
}
}
