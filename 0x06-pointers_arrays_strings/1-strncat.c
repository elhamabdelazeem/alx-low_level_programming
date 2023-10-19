#include "main.h"
/**
 * _strncat -  function that concatenates two strings
 * @dest: string to concatenate to
 * @src: char string
 * @n: number of letters
 * Return:  pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{int i, j;
for (j = 0; dest[j] != '\0'; j++)
	;
for (i = 0; src[i] != '\0' && n > 0; n--, i++)
{
dest[j + i] = src[i];
}
dest[j + i] = '\0';
return (dest);
}
