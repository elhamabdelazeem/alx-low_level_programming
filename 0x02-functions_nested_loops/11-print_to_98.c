#include "main.h"
#include<unistd.h>
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line
 * @n: operand
 */
void print_to_98(int n)
{int i;
if (n > 0)
{
for (i = n; i <= 98; i--)
{if (i >= 10)
{_putchar((i / 10) + '0');
_putchar((i % 10) + '0'); }
else if (i < 10)
{_putchar((i % 10) + '0'); }
_putchar(',');
_putchar(' '); }
}
if (n < 0)
{
for (i = n; i <= 98; i++)
{if ((i >= 10) || (i <= -10))
{_putchar((i / 10) + '0');
_putchar((i % 10) + '0'); }
else if ((i > -10) || (i < 10))
{_putchar((i % 10) + '0'); }
_putchar(',');
_putchar(' '); }
 }
_putchar('\n'); }


