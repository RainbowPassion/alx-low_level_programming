#include <stdio.h>
#include "main.h"
/**
 * main - prints its name, followed by a new line.
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return:  0
*/
int main(int argc, char *argv[])
{
printf("%s\n", *argv);
(void)argc;
return (0);
}
