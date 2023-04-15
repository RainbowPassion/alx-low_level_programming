#include "main.h"
/**
 * _strncpy - copies a string.
 *
 * @dest: input value
 * @src: input value
 * @j: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int j)
{
int k;
k = 0;
while (k < j && src[k] != '\0')
{
dest[k] = src[k];
k++;
}
while (k < j)
{
dest[k] = '\0';
k++;
}
return (dest);
}

