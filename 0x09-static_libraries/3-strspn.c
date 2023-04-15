#include "main.h"
/**
 *_strspn - gets the length of a prefix substring.
 *
 *@s: The input string to search.
 *@accept: accept The string of acceptable characters.
 *
 *Return: number of bytes in the initial segment of s.
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j, len;
len = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
len++;
break;
}
}
if (accept[j] == '\0')
{
return (len);
}
}
return (len);
}
