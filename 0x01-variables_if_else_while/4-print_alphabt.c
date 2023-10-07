#include <stdio.h>
/**
 * main - Print all the letters except q and e
 *Return: always 0 (success)
 */
int main(void)
{char ch;
for (ch = 97; ch < 123; ch++)
{if (ch == 101)
continue;
else if (ch == 113)
continue;
putchar(ch);}
putchar('\n');
return (0); }
