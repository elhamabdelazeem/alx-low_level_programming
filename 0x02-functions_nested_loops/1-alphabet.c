#include<stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: always 0 (success)
 */
void print_alphabet(void);
int main(void)
{print_alphabet();
return (0); }
void print_alphabet(void)
{int n;
for (n = 97; n <= 122; n++)
putchar(n);
putchar('\n'); }
