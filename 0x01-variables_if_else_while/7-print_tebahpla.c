#include<stdio.h>
/**
  * main - program that prints the lowercase alphabet in reverse
  * Return: always 0 (success)
  */
int main(void)
{char ch;
for (ch = 122; ch >= 97; ch--)
putchar(ch);
putchar('\n');
return (0); }
