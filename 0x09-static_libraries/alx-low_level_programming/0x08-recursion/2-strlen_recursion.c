#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string wanted to count its characters
 * Return: string length
 */
int _strlen_recursion(char *s)
{int length = 0;
if (*s == '\0')
return (0);
else
{
length = 1 + _strlen_recursion(s + 1);
return (length);
}
}
