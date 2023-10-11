#include "main.h"
#include<stdio.h>
#include<unistd.h>
/**
 * print_sign - prints the sign of a number
 * @n: operand
 * Return: 1 if the number is greter than 0
 *         0 if the number is 0
 *         -1 if the number is less than 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return (0); }
