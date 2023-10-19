#include "main.h"
/**
 * reverse_array -  function that reverses the content of an array of integers
 * @a: input array of integers
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{int i, b;
for (i = 0; i < (n / 2); i++)
{
b = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = b;
}
}
