#include "main.h"
/**
 * puts_half -  function that prints half of a string
 * @srt: input srting
 * Return: void
 */
void puts_half(char *str)
{int i, mid;
for (i = 0; str[i] != 0; i++)
	;
mid = i / 2;
if (i % 2 == 1)
while (mid < i)
{
_putchar(str[mid]);
mid ++;
}
_putchar('\n');
}
