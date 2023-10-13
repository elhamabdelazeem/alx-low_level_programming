#include "main.h"
#include<unistd.h>

 /**
  * print_square -  prints a square
  * @size: operand size of square
  * Description: Can only use _putchar to print. Use '#' to print square
  * Return: void
  */

void print_square(int size)
{int i, j;
if (size <= 0)
_putchar('\n');
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
