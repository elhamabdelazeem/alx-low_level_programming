#include "main.h"
#include<unistd.h>
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{int i, j, R;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
R = i * j;
if (R > 10)
{{_putchar((R / 10) + '0');
_putchar((R % 10) + '0');
_putchar(',');
_putchar(' '); }
_putchar('\n'); }
else if (R <10)
{{_putchar((R % 10) + '0');
_putchar(',');
_putchar(' '); }
_putchar('\n'); }
}}}
