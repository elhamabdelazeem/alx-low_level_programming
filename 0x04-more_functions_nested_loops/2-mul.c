#include "main.h"
#include<unistd.h>
#include<stdio.h>
/**
 * mul - multiplies two integers
 * @a: first operand
 * @b: second operand
 * Return: result of muliplication
 */
int mul(int a, int b)
{int multi;
multi = a * b;
_putchar((multi / 10) + '0');
_putchar((multi % 10) + '0');
return (multi);
}
