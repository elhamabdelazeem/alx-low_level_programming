#include "main.h"
/**
 * _strncpy - copying two strings
 * @dest: pointer
 * @src: source string
 * @n: number of letters
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
if (n > i)
dest[i] = '\0';
return (dest);
}
