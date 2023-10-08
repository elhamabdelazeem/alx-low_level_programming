#include<stdio.h>
/**
  * main - prints all possible combinations of single-digit numbers
  * Return: always 0 (success)
  */
int main(void)
{int n;
for (n = 48; n <= 56; n++)
{putchar(n);
putchar(','); }
if (n == 57)
putchar(n);
putchar('\n');
return (0); }
