#include<stdio.h>
/**
  * main -   prints all possible different combinations of three digits
  *Return: always 0 (success)
  */
int main(void)
{int n1, n2, n3;
for (n1 = 48; n1 <= 57; n1++)
{for (n2 = 49; n2 <= 57; n2++)
{if (n1 == n2)
continue;
if ((n1-n2) == 1)
continue;
if ((n1-n2) == 2)
continue;
if ((n1-n2) == 3)
continue;
if ((n1-n2) == 4)
continue;
if ((n1-n2) == 5)
continue;
if ((n1-n2) == 6)
continue;
if ((n1-n2) == 7)
continue;
if ((n1-n2) == 8)
continue;
{for (n3 = 50; n3 <= 57; n3++)
{if (n2 == n3)
continue;
if ((n2 - n3) == 1)
continue;
if ((n2 - n3) == 2)
continue;
if ((n2 - n3) == 3)
continue;
if ((n2 - n3) == 4)
continue;
if ((n2 - n3) == 5)
continue;
if ((n2 - n3) == 6)
continue;
if ((n2 - n3) == 7)
continue;
putchar(n1);
putchar(n2);
putchar(n3);
if (n1 == 55)
break;
putchar(',');
putchar(' '); }}}}
putchar('\n');
return (0); }
