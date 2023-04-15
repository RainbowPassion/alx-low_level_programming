#include "main.h"
/**
 *_memcpy - copies memory area.
 *
 *@dest: memory area where it's stored
 *@src: memory area where it's copied
 *@n: number of bytes
 *
 *Return: (dest)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
int j = n;
for (; i < j; i++)
{
dest[i] = src[i];
n--;
}
return (dest);
}
