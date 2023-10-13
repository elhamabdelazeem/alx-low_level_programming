#include "main.h"
#include<unistd.h>
#include<stdio.h>
int mul(int a, int b)
{int mul;
mul = a * b;
_putchar((mul / 10) + '0');
_putchar((mul % 10) + '0');
return (mul);
}
