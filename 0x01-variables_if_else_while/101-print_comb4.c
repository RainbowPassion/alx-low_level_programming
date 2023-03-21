#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -    prints all possible different combinations of three digits.
*
*
* Return: 0 (Success)
*/
int main(void)
{
int n, j, k;
for (n = 0; n < 10; n++)
{
for (j = n + 1; j < 10; j++)
{
for (k = j + 1; k < 10; k++)
{
if ((n != j) && (n != k) && (j != k))
{
putchar(n + '0');
putchar(j + '0');
putchar(k + '0');
if (n != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
return (0);
}
