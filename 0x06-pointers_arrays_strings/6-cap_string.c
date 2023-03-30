#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: string to be capitalized.
 *
 * Return: (s)
 */
char *cap_string(char *s)
{
int i;
int capitalize = 1;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' ||
s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' ||
s[i] == '{' || s[i] == '}')
{
capitalize = 1;
}
else if (capitalize && isalpha(s[i]))
{
s[i] = toupper(s[i]);
capitalize = 0;
}
else
{
capitalize = 0;
}
}
return (s);
}
