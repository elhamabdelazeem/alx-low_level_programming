#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: input number
 * Return: factorial value
 */
int factorial(int n)
{int fact = 0;
if (n < 0)
return (-1);
else if (n = 0)
return (1);
else
{
fact = n * factorial(n - 1);
}
return (fact);
}
