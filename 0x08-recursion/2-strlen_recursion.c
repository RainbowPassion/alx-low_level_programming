/**
* _strlen_recursion - returns the length of a string.
* @s: string to print
*
* Return: 0
*/
int _strlen_recursion(char *s)
{
if (*s)
return (1 + _strlen_recursion(s + 1));
else
return (0);
}
