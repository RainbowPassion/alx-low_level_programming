#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the number of arguments passed into it.
 *
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
(void) argv;
return (0);
}
