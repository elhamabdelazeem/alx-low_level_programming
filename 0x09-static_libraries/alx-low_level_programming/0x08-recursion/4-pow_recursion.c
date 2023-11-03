#include "main.h"
/**
 * _pow_recursion - function that returns
 * the value of x raised to the power of y
 * @x: base number
 * @y: power number
 * Return: the value of x power y
 */
int _pow_recursion(int x, int y)
{int value;
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y == 1)
return (x);
else
{
value = x * _pow_recursion(x, (y - 1));
}
return (value);
}
