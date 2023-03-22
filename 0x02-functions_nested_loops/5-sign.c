#include "main.h"
/**
* print_sign - prints the sign of a number.
*
* @n: character to be checked
*
* Return: 1 for greater than 0 , 2 if its 0 and -1 if its less than 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
