#include "main.h"
/**
 * puts_half -  function that prints half of a string
 * @srt: input srting
 * Return: void
 */
void puts_half(char *str)
{ int i, n, j;
for (i = 0; str[i] != 0; i++)
	;
if (i % 2 == 1)
{n = (i - 1) / 2;
for (j = n; str[j] != '\0'; j++)
 _putchar(str[j]);
}
else if (i % 2 == 0)
{n = i / 2;
for (j = n; str[j] != '\0'; j++)
_putchar(str[j]);
}
_putchar('\n');
}

