#include "main.h"
#include<unistd.h>
/**
 *  jack_bauer -  prints every minute of the day
 */
void jack_bauer(void)
{int i, j;
for (i = 0; i <= 23; i++)
{
for (j =0; j<= 59; j++)
{
if (( i < 10) && (j < 10))
{_putchar('0');
_putchar(i + '0');
_putchar(':');
_putchar('0');
_puchar(j + '0'); }
else if (i < 10)
{_putchar('0');
_putchar(i + '0');
_putchar(':');
_puchar(j + '0'); }
else if (j < 10)
{_putchar(i + '0');
_putchar(':');
_putchar('0');
_puchar(j + '0'); }
else if ((i > 10) && (j > 10))
{_puchar(i + '0');
_putchar(':');
_putchar(j + '0'); }}}}

