#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -  a program that multiplies two numbers.
 *
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
int result, num1, num2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}
