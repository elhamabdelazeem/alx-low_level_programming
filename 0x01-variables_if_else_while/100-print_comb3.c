#include<stdio.h>
/**
  * main -  prints all possible different combinations of two digits
  *Return: always 0 (success)
  */
int main(void)
{int n1, n2;
for (n1 = 48; n1 <= 57; n1++)
{
for (n2 = 49; n2 <= 57; n2++)
{
if (n1 == n2)
continue;
if ((n1 - n2) == 1)
continue;
if ((n1 - n2) == 2)
continue;
if ((n1 - n2) == 3)
continue;
if ((n1 - n2) == 4)
continue;
if ((n1 - n2) == 5)
continue;
if ((n1 - n2) == 6)
continue;
if ((n1 - n2) == 7)
continue;
if ((n1 - n2) == 8)
continue;
putchar(n1);
putchar(n2);
if (n1 == 56)
break;
putchar(',');
putchar(' '); }}
putchar('\n');
return (0); }
