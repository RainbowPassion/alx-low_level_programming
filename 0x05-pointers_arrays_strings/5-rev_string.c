#include "main.h"
#include <string.h>
/**
* rev_string - function that reverses a string
* @s: Input string
* Return: String in reverse
*/
void rev_string(char *s)
{
	int len = strlen(s);
	char temp;
	int i;
	int j;

	for (i = 0, j = len - 1; i < j; i++, j--)
{
	temp = s[i];
	s[i] = s[j];
	s[j] = temp;
	}
}
