#include "main.h"
#include<unistd.h>
#include<ctype.h>
/**
 * _islower - checks for lowercase character
 * Return: always 1 (success)
 */
int _islower(int c)
{int i = 1;
if ((c >= 97) || (c <= 122))
return (i); }
