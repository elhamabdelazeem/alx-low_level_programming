#include "main.h"
#include<unistd.h>
#include<stdio.h>
/**
 * print_numbers -  prints the numbers, from 0 to 9
 */
void print_numbers(void)
{char n;
for (n = '0'; n <= '9'; n++)
_putchar(n);
_putchar('\n');
}

