#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* *_strdup - returns a pointer to a newly allocated space in memory.
* @str: pointer
*
* Return: strdup - pointer to the duplicated string.
*/
char *_strdup(char *str)
{
size_t i;
size_t len;
char *strdup;
if (str == NULL)
return (NULL);
len = strlen(str) + 1;
strdup = malloc(len);
if (strdup == NULL)
return (NULL);
for (i = 0; i < len; i++)
strdup[i] = str[i];
return (strdup);
}
