#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -   prints all single digit numbers of base 10 starting from 0
*
*
* Return: 0 (Success)
*/
int main(void)
{
int i = 0;
print_digit:
if (i <= 9)
{
putchar(i + '0');
i++;
goto print_digit;
}
putchar('\n');
return (0);
}
