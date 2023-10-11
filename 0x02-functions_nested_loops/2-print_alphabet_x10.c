#include "main.h"
#include<unistd.h>
/**
 * print_alphabet_x10 -  prints 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{int i, n;
for (i = 1; i <= 10; i++)
{
for (n = 97; n <= 122; n++)
_putchar(n);
_putchar('\n'); }}
