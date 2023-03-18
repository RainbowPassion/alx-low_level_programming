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
pintf("Size of char: %ld byte(s)\n", sizeof(charType));
printf("Size of int: %ld bytes(s)\n", sizeof(intType));
printf("Size of long int: %ld bytes(s)\n", sizeof(longType));
printf("Size of long long int: %ld bytes(s)\n", sizeof(longlongType));
printf("Size of float: %ld bytes(s)\n", sizeof(floatType));
return (0);
}
