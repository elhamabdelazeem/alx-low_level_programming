#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print triangle, followed by a new line . 
 * but for multiple of three prints fizz instead of the number 
 * @size: size of the triangle
 */
void print_triangle(int size)
{int i, j;
if (size <= 0) 
{
_putchar('\n') 
} 
for (i = 1; i <= size; i++)
{
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
return (0);
}
