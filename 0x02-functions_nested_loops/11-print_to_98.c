#include "main.h"
#include<unistd.h>
#include<stdio.h>
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
{_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
_putchar('\n');
break;}
else if (n > 9)
{printf("%d, ", n); }}}
else if (n < 98)
{
for (; n < 98; n++)
{printf("%d, ", n); }}}

