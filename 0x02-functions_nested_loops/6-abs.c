#include "main.h"
#include <stdlib.h>
/**
 * _abs - computes the absolute value of an integer
 * @n: operand
 * Return: absolute value
 */
int _abs(int n)
{int absolute;
if (n > 0)
{
absolute = 1 * n;
return (absolute);
}
else if (n < 0)
{
absolute = -1 * n;
return (absolute);
}
return (0); }
