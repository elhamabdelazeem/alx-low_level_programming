#include "main.h"
#include<unistd.h>
#include<stdio.h>
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{int n, i;
for (i = 1; i <= 10; i++)
{
for (n = 0; n <= 14; n++)
{
if ((n >= 10)
_putchar('1');
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}
