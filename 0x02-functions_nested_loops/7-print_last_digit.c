#include "main.h"
#include<unistd.h>
/**
 * print_last_digit -  function that prints the last digit of a number
 * @n: operand
 * Return: last digit
 */
int print_last_digit(int n)
{int reminder;
if (n >= 0)
{
reminder = n % 10;
_putchar(reminder);
return (reminder);
}
else if (n < 0)
{
reminder = (-1 * n) % 10;
_putchar(reminder);
return (reminder);
}}
