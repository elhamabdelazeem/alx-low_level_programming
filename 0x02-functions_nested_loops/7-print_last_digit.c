#include "main.h"
#include<unistd.h>
/**
 * print_last_digit -  function that prints the last digit of a number
 * @n: operand
 * Return: last digit
 */
int print_last_digit(int n)
{int reminder;
reminder = n % 10;
_putchar(reminder);
return (reminder); }
