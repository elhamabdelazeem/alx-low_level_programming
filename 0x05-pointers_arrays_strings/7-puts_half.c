#include "main.h"
/**
 * puts_half -  function that prints half of a string
 * @str: input srting
 * Return: void
 */
void puts_half(char *str)
{int i, half;
i = 0;
while (str[i] != '\0')
i++;
half = i / 2;
if (i % 2 == 1)
half++;
while (half < i)
{
_putchar(str[half]);
half++;
}
_putchar('\n');
}
