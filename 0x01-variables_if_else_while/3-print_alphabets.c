#include <stdio.h>
/**
 * main - printing lower case alphabet then upper case
 * Return: always 0 (success)
 */
int main(void)
{char ch;
for (ch = 97; ch < 123; ch++)
putchar(ch);
for (ch = 65; ch < 91; ch++)
putchar(ch);
putchar('\n');
return (0); }
