#include "main.h"
/**
*  times_table -  prints the 9 times table, starting with 0
*
* Return: required
*/
void times_table(void)
{
int n, j, results;
for (n = 0; n <= 9; n++)
{
_putchar(48);
for (j = 1; j <= 9; j++)
{
_putchar(',');
_putchar(' ');
results = n * j;
if (results <= 9)
_putchar(' ');
else
_putchar((results / 10) + 48);
_putchar((results % 10) + 48);
}
_putchar('\n');
}
}
