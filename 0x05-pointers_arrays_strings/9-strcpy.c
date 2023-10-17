#include "main.h"
/**
 * _strcpy - function that copies the string 
 * @dest: A buffer to copy the string to.
 * @src: string to be copied
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{int i;
i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
return (dest);
}
