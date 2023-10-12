#include "main.h"
#include<unistd.h>
/**
 * print_last_digit -  function that prints the last digit of a number
 * @n: operand
 * Return: last digit
 */
int print_last_digit(int n)
{int R;
if (n >= 0)
{
R = n % 10;
_putchar('R');
return (R);
}
else if (n < 0)
{
R = (-1 * n) % 10;
_putchar('R');
return (R);
}
return (0); }
