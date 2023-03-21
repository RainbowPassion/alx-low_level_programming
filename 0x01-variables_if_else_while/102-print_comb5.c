#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -  prints all possible combinations of two two-digit numbers.
*
*
* Return: 0 (Success)
*/
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++)
{
int first_digit_i = i / 10;
int second_digit_i = i % 10;
int first_digit_j = j / 10;
int second_digit_j = j % 10;
if (i != j && (first_digit_i < first_digit_j
|| (first_digit_i == first_digit_j && second_digit_i <= second_digit_j)))
{
putchar(first_digit_i + '0');
putchar(second_digit_i + '0');
putchar(' ');
putchar(first_digit_j + '0');
putchar(second_digit_j + '0');
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
