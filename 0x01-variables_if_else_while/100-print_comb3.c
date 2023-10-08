#include<stdio.h>
/**
  * main -  prints all possible different combinations of two digits
  *Return: always 0 (success)
  */
int main(void)
{int n1, n2;
for (n1 = 48; n1 < 57; n1++)
{for (n2 = 48; n2 < 57; n2++)
{if (n1 == n2)
continue;
putchar(n1);
putchar(n2);
putchar(',');
putchar(' '); }}
putchar('\n');
return (0); }
