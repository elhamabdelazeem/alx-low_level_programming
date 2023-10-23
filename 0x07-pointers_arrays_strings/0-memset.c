#include "main.h"

/**
 * _memset -  function fills the first n bytes of 
 * the memory area pointed to by s with the constant byte b
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{int i;
i = 0;
for (i = 0; i < n; i++, n--)
s[i] = b;
return (s);
}
