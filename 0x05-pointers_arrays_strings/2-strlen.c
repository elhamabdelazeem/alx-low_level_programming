#include "main.h"
/**
 *  _strlen -  function that returns the length of a string
 *  @s: input string
 *  Return: string length
 */
int _strlen(char *s)
{int i;
int length;
for (i = 0; s[i] != '\0'; i++)
length = i + 1;
return (length);
}
