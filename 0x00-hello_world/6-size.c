#include <stdio.h>
/**
* main -  prints the size of various types on the computer.
*
*
* Return: 0 (Success)
*/
int main(void)
{
char charType;
int intType;
long int longType;
long long int longlongType;
float floatType;
printf("Size of a char: %lu byte(s)\n", sizeof(charType));
printf("Size of an int: %lu bytes(s)\n", sizeof(intType));
printf("Size of a long int: %lu bytes(s)\n", sizeof(longType));
printf("Size of a long long int: %lu bytes(s)\n", sizeof(longlongType));
printf("Size of a float: %lu bytes(s)\n", sizeof(floatType));
return (0);
}
