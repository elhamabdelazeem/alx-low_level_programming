#include<stdio.h>
/**
  * main - program that prints  all the numbers of base 16 in lowercase, followed by a new line
  * Return: always 0 (success)
  */
int main(void)
{char ch1, ch2;
for (ch1 = 48; ch1 <= 57; ch1++)
putchar(ch1);
for (ch2 = 97; ch2 <= 102; ch2++)
putchar(ch2);
putchar('\n');
return (0); }
