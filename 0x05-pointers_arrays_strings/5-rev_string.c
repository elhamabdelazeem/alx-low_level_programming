#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: input string
 * Return: void
 */
void rev_string(char *s)
{int i, j, c;
for (i = 0; s[i] != '\0'; i++)
	;
j = i - 1;
for (i = 0; i < j; i++, j--)
{
c = s[i];
s[i] = s[j];
s[j] = c;
}
}
