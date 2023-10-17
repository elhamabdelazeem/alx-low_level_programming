#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: first integer to be swaped
 * @b: second integer to be swaped
 * Return: void
 */
void swap_int(int *a, int *b)
{int new;
new = *a;
*a = *b;
*b = new;
}
