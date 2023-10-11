#include "main.h"
#include<stdio.h>
#include<unistd.h>
/**
 * print_sign - prints the sign of a number
 * @n: operand
 * Return: always 1 (success)
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
putchar('+');
}
else if (n == 0)
{
return (0);
putchar('0');
}
else if (n < 0)
{
return (-1);
putchar('-');
}
return (0); }
