#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - program that adds positive numbers.
 *
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
int i;
int j;
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
char *arg = argv[i];
j = 0;
while (arg[j] != '\0')
{
if (!isdigit(arg[j]))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(arg);
}
printf("%d\n", sum);
return (0);
}
