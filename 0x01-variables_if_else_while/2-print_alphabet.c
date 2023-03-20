#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints the alphabet in lowercase, followed by a new line.
*
*
* Return: 0 (Success)
*/
int main(void)
{
for (char l = 'a'; l <= 'z'; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}
