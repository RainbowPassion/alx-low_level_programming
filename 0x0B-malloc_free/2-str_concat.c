#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* str_concat -  function that concatenates two strings.
* @s1: pointer
* @s2: pointer
* Return: results
*/
char *str_concat(char *s1, char *s2)
{
int i;
int s1_len =  0;
int s2_len =  0;
int result_len;
char *result;
if (s1 != NULL)
s1_len =  strlen(s1);
if (s2 != NULL)
s2_len = strlen(s2);
result_len = s1_len + s2_len + 1;
result = malloc(result_len *sizeof(char));
if (result == NULL)
return (NULL);
for (i = 0; i < s1_len; i++)
{
result[i] = s1[i];
}
for (i = 0; i < s2_len; i++)
{
result[s1_len + i] = s2[i];
}
result[result_len - 1] = '\0';
return (result);
}
