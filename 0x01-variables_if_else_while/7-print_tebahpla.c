#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -   prints the lowercase alphabet in reverse
*
*
* Return: 0 (Success)
*/
int main(void)
{
char l = 'z';
while (l >= 'a')
{
putchar(l);
l--;
}
putchar('\n');
return (0);
}
