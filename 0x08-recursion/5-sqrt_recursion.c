#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input number
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
return (assist(n, 1));
}
/**
 * assist - help function to solve _sqrt_recursion
 * @q: first parameter
 * @i: second parameter
 * Return: square root if natural square root, or -1 if none found
 */
int assist(int q, int i)
{int square;
square = i * i;
if (square == q)
return (i);
else if (square < q)
return (assist(q, (i + 1)));
else 
return (-1);
}
