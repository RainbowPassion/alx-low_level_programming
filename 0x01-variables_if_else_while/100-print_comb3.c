#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -     prints all possible different combinations of two digits.
*
*
* Return: 0 (Success)
*/
int main(void)
{
int n, j;
for (n = 0; n < 10; n++)
{
for (j = n + 1; j < 10; j++)
{
putchar(n + '0');
putchar(j + '0');
if (n != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
