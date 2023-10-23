#include "main.h"
/**
 * _memcpy -  function copies n bytes
 *  from memory area src to memory area dest
 *  @dest: destination array
 *  @src: source array
 *  @n: number of bytes tobe copied
 *  Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{int j;
for (j = 0; j < n; j++)
dest[j] = src[j];
return (dest);
}
