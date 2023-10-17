#include "main.h"
/**
 * _strcpy - function that copies the string 
 * @dest: A buffer to copy the string to.
 * @src: string to be copied
 * Return:  A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{int i;
for (i = 0; src[i] == '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}
