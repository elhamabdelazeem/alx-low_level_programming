#include "main.h"
/**
 * _strcat -  function that concatenates two strings
 * @dest: string to concatenate to
 * @src: string
 * Return: pointer to resulting string 'dest'
 */
char *_strcat(char *dest, char *src)
{int i, j;
for (j = 0; dest[j] != '\0'; j++)
	;
for (i = 0; src[i] != '\0'; i++)
{
dest[j + i] = src[i];
}
dest[j + i] = '\0';
return (dest);
}
