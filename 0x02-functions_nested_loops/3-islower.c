#include "main.h"
#include<unistd.h>
#include<ctype.h>
/**
 * _islower - checks for lowercase character
 * @c: operand
 * Return: always 1 (success)
 */
int _islower(int c)
{if ((c >= 97) && (c <= 122))
{return (1); }
return (0); }
