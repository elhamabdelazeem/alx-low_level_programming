#include "main.h"
#include<unistd.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: operand
 */
void print_to_98(int n)
{
if (n >= 98)
{
for (; n >= 98; n--)
{if (n == 98)
{_putchar((n / 10) + (n % 10) + '0');
_putchar('\n');
break;}
else if (n > 98) 
{_putchar((n / 10) + (n % 10) + '0');
_putchar(',');
_putchar(' ');}}}
else if (n < 98)
{
for (; n < 98; n++)
{_putchar((n / 10) + (n % 10) + '0');
_putchar(',');
_putchar(' ');}}}

