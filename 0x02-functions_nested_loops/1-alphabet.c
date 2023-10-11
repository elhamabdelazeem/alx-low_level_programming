#include "main.h"
#include <unistd.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{print_alphabet();
return (0); }
void print_alphabet(void)
{int n;
for (n = 97; n <= 122; n++)
_putchar(n);
_putchar('\n'); }
